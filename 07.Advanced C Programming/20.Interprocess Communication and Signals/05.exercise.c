#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <signal.h>

int score = 0;

// Function to end the game and display the final score
void end_game() {
   printf("\nFinal score: %d\n", score);
   exit(0); 
}

// Function to catch a signal and associate it with a handler function
int catch_signal(int sig, void (*handler)(int)) {
   struct sigaction action;
   action.sa_handler = handler;
   sigemptyset(&action.sa_mask);
   action.sa_flags = 0;
   
   return sigaction(sig, &action, NULL);
}

// Function called when the time is up
void times_up() {
   puts("\nTIME's UP!");
   raise(SIGINT); // Raise the SIGINT signal to end the game
}

// Function to display an error message and exit the program
void error(char *msg)
{
   fprintf(stderr, "%s: %s\n", msg, strerror(errno));
   exit(1);
}

int main() {
   catch_signal(SIGALRM, times_up); // Set up the signal handler for SIGALRM (alarm signal)
   catch_signal(SIGINT, end_game); // Set up the signal handler for SIGINT (interrupt signal)

   srand(time(0)); // Seed the random number generator with the current time
   
   while(1) {
      int a = rand() % 11; // Generate a random number between 0 and 10
      int b = rand() % 11; // Generate another random number between 0 and 10

      char txt[4]; // Buffer to store the user's input
    
      alarm(5); // Set an alarm for 5 seconds

      printf("\nWhat is %d times %d: ", a, b);
      fgets(txt, 4, stdin); // Read the user's input

      int answer = atoi(txt); // Convert the user's input to an integer

      if(answer == a * b)
         score++; // Increase the score if the answer is correct
      else
         printf("\nWrong! Score: %d\n", score); // Display a message if the answer is wrong
   }

   return 0;
} 
