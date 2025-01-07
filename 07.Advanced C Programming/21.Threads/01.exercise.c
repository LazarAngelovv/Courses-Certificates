#include <stdio.h>
#include <pthread.h>

void *hello_fun(void *arg)
{
    printf("Hello World!\n");
    return NULL;
}

void *hello_thred1(void *arg)
{
    printf("First operation\n");
    return NULL;
}

void *hello_thred2(void *arg)
{
    printf("Second operation\n");
    return NULL;
}

void *hello_thred3(void *arg)
{
    printf("Third operation\n");
    return NULL;
}

int main(int argc, char *argv[])
{
    pthread_t thread;
    pthread_create(&thread, NULL, hello_fun, NULL);
    pthread_join(thread, NULL);

    pthread_t thread1;
    pthread_create(&thread, NULL, hello_thred1, NULL);
    pthread_join(thread, NULL);
    
    pthread_t thread2;
    pthread_create(&thread, NULL, hello_thred2, NULL);
    pthread_join(thread, NULL);
    
    pthread_t thread3;
    pthread_create(&thread, NULL, hello_thred3, NULL);
    pthread_join(thread, NULL);
    
    return 0;
}
