//exceptions and sys call
#include "exceptions.h"
#include <stdio.h>

void handle_div_zero() {
    printf("Exception: Divide by zero!\n");
}

void handle_invalid_mem() {
    printf("Exception: Invalid memory access!\n");
}

void syscall_yield() {
    // Threads voluntarily yield CPU
    printf("System call: yield\n");
}
