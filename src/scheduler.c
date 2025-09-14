#include "scheduler.h"
#include "common.h"
#include <stdio.h>

#define MAX_THREADS 10
static Thread* ready_queue[MAX_THREADS];
static int head = 0, tail = 0;

void scheduler_init(void) {
    head = tail = 0;
}

void scheduler_add_thread(Thread *t) {
    ready_queue[tail] = t;
    tail = (tail + 1) % MAX_THREADS;
}

Thread* scheduler_next_thread(void) {
    if (head == tail) return NULL; // empty
    Thread* t = ready_queue[head];
    head = (head + 1) % MAX_THREADS;
    return t;
}

void scheduler_tick(void) {
    // will connect to timer interrupt later
}
