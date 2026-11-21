#include <stdio.h>

void countCalls() {
    /* static storage class retains its value between function calls */
    static int count = 0;

    count++;
    printf("Function has been called %d time(s).\n", count);
}

int main() {
    countCalls();
    countCalls();
    countCalls();
    countCalls();

    return 0;
}
