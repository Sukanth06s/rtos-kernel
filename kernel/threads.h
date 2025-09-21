#ifndef THREADS_H
#define THREADS_H

#define MAX_THREADS 4

typedef struct {
    int id;
    void (*entry)(void);
    int active;
} thread_t;

void threads_init(void);
int thread_create(void (*entry)(void));
void thread_yield(void);
thread_t* get_current_thread(void);

#endif
