#include "isr.h"
#include "scheduler.h"

void timer_interrupt_handler(void) {
    // Call scheduler on timer tick
    schedule();
}
