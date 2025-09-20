#ifndef THREADING_H
#define THREADING_H

#include <stdint.h>

#define MAX_THREADS 8
#define STACK_SIZE  1024

typedef enum {
    THREAD_READY,
    THREAD_RUNNING,
    THREAD_BLOCKED,
    THREAD_DEAD
} thread_state_t;

typedef struct tcb {
    uint32_t *stack_ptr;       // Current stack pointer
    thread_state_t state;      // Current state
    void (*thread_func)(void); // Function to run
    struct tcb *next;          // Next thread in scheduler list
    uint32_t stack[STACK_SIZE];// Thread stack
} tcb_t;

// Thread API
int thread_create(void (*func)(void));
void thread_exit(void);
void thread_yield(void);

#endif
