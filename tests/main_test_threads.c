#include "threading.h"
#include <stdio.h>

void thread1() { printf("Thread 1 running\n"); }
void thread2() { printf("Thread 2 running\n"); }

int main() {
    thread_create(thread1);
    thread_create(thread2);

    while(1) {
        thread_yield();
    }
    return 0;
}
