
/* I have compiled this in Online compiler as it was not compiling in Linux terminal.*/
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/time.h>
#include<unistd.h>
#include <limits.h>
#include <stdbool.h>


int flag[2];
int turn;
const int COUNT = 50000; //Big number creates larger wait time. we could have used directly in sleep() as well.
int ans = 0;

void lock_init()
{
    flag[0] = flag[1] = 0;
    turn = 0;
}


void lock(int self)
{   flag[self] = 1;
    turn = 1-self;
    while (flag[1-self]==1 && turn==1-self) ;
}

void unlock(int self)
{
    flag[self] = 0;
}

void* func(void *s)
{
    int i = 0;
    int self = (int *)s;
    printf("Thread Entered: %d \n", self);
    for (i=0; i<COUNT; i++)
    {
       lock(self);
       ans++;
       sleep(0.0001);
       unlock(self);

       if (i % (COUNT/10) == 0){
           printf("\nProcess-%d is being processed\n", self);
       }
    }
    return NULL;
}


int main()
{
    pthread_t p1, p2;
    lock_init();

    pthread_create(&p1, NULL, func, (void*)0);
    pthread_create(&p2, NULL, func, (void*)1);

    pthread_join(p1, NULL);
    pthread_join(p2, NULL);

    printf("\nActual Count: %d \n************\nExpected Count: %d", ans, COUNT*2);
    printf("\n\nThe threads 0 and 1 enter the critical section seperately and hence mutual exclusion is satisfied.");
    printf("\n\nIf the actual and expected counts have the same value, the condition of progress is satisfied.");
    printf("\n\nThe second thread to enter the critical section waits for a time of the \norder of *COUNT*(%d) until it enter the CS and hence the bounded waiting \ncondition is satisfied.\n\n",COUNT);
    return 0;
}

