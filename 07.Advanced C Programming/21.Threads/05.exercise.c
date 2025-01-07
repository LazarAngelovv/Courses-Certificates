#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>
#include <unistd.h>

#define NTHREADS 10

pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;     // Mutex lock for thread synchronization
pthread_cond_t evens_done = PTHREAD_COND_INITIALIZER; // Condition variable for signaling

int number_evens_finished = 0; // Number of even numbers finished processing
int counter = 0;               // Counter variable

void *func1(void *data)
{
    int *x = (int*)data; // Cast the input data to an integer pointer

    pthread_mutex_lock(&lock); // Acquire the mutex lock to ensure exclusive access to shared variables

    if (*x % 2 == 0) // Check if the number is even
    {
        number_evens_finished++; // Increment the count of even numbers finished processing

        if (number_evens_finished == NTHREADS / 2) // Check if half of the threads have finished processing even numbers
        {
            pthread_cond_broadcast(&evens_done); // Signal all waiting threads that even numbers are finished processing
        }
    }
    else
    {
        pthread_cond_wait(&evens_done, &lock); // Wait until even numbers are finished processing
    }

    counter++; // Increment the counter
    printf("message is %d, thread id = %lu modified the counter to %d\n", *x, pthread_self(), counter);
    printf("message is %d, thread id = %lu read the counter %d\n", *x, pthread_self(), counter);

    pthread_mutex_unlock(&lock); // Release the mutex lock

    pthread_exit(NULL); // Exit the thread
}

int main(void)
{
    pthread_t thread_id[NTHREADS]; // Array to store thread IDs
    int values[NTHREADS];          // Array to store integer values for threads

    for (int k = 0; k < 150; k++) // Perform the experiment 150 times
    {
        for (int i = 0; i < NTHREADS; i++) // Create multiple threads
        {
            values[i] = i; // Assign a value to each thread
            pthread_create(&thread_id[i], NULL, func1, &values[i]); // Create a thread and pass the value
        }

        sleep(1); // Sleep for 1 second

        for (int j = 0; j < NTHREADS; j++) // Wait for all threads to finish
        {
            pthread_join(thread_id[j], NULL);
        }

        counter = 0;                   // Reset the counter for the next experiment
        number_evens_finished = 0;     // Reset the count of even numbers finished processing for the next experiment
    }

    return 0;
}
