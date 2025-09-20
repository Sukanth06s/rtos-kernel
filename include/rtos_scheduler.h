#ifndef RTOS_SCHEDULER_H
#define RTOS_SCHEDULER_H

#include "threading.h"

tcb_t *scheduler_get_next_thread(void);
void scheduler_add_thread(tcb_t *tcb);

#endif
