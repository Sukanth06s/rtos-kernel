#include "threads.h"
#include <stdio.h>

static thread_t threads[MAX_THREADS];
static int current = -1;
static int total_threads = 0;

void threads_init(void) {
    for(int i=0;i<MAX_THREADS;i++) threads[i].active=0;
    printf("[Threads] Initialized\n");
}

int thread_create(void (*entry)(void)) {
    if (total_threads >= MAX_THREADS) return -1;
    threads[total_threads].id = total_threads;
    threads[total_threads].entry = entry;
    threads[total_threads].active = 1;
    printf("[Threads] Created thread %d\n", total_threads);
    return total_threads++;
}

thread_t* get_current_thread(void) {
    if (current < 0) return NULL;
    return &threads[current];
}

void thread_yield(void) {
    if (current >= 0 && threads[current].active)
        printf("[Threads] Yielding from %d\n", current);

    current = (current + 1) % total_threads;
    printf("[Threads] Switching to %d\n", current);
    threads[current].entry();
}
