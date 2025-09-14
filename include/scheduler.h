#ifndef SCHEDULER_H
#define SCHEDULER_H

#include "threading.h"   // scheduler needs threads

void scheduler_init(void);
void scheduler_add_thread(Thread *t);
void scheduler_remove_thread(Thread *t);
Thread* scheduler_next_thread(void);
void scheduler_tick(void);

#endif
