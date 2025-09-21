#include "scheduler.h"
#include "threads.h"
#include <stdio.h>

void scheduler_init(void) {
    threads_init();
    printf("[Scheduler] Initialized\n");
}

void scheduler_tick(void) {
    printf("[Scheduler] Tick → context switch\n");
    thread_yield();
}
