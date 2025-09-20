.syntax unified
.thumb

.global PendSV_Handler
PendSV_Handler:
    // Save context of current thread
    // Call scheduler_get_next_thread()
    // Restore context of next thread
    bx lr

