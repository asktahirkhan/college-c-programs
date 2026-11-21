#include <stdio.h>

int main() {
    int start, end, temp, sum = 0;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    if (start > end) {
        temp = start;
        start = end;
        end = temp;
    }

    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    printf("\nSum of all odd numbers between %d and %d is: %d\n",
           start, end, sum);

    return 0;
}
