#include "threading.h"
#include <stdio.h>
#include <stdlib.h>

static tcb_t threads[MAX_THREADS];
static int thread_count = 0;

int thread_create(void (*func)(void)) {
    if(thread_count >= MAX_THREADS) return -1;

    tcb_t *t = &threads[thread_count++];
    t->thread_func = func;
    t->state = THREAD_READY;
    t->stack_ptr = t->stack + STACK_SIZE - 1;

    return 0;
}

void thread_exit(void) {
    printf("Thread exited\n");
    // Mark current thread as dead
}

void thread_yield(void) {
    printf("Yielding thread\n");
    // Switch to next thread (POSIX simulation)
}
