#include "threading.h"
#include "rtos_scheduler.h"

static tcb_t *current_thread;

void thread_exit(void) {
    current_thread->state = THREAD_DEAD;
    // Trigger PendSV or scheduler
}

void thread_yield(void) {
    // Save registers, trigger PendSV for context switch
}
