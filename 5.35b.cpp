#include <stdio.h>

int main(void) {
    unsigned int n = 0;
    unsigned long long int prev2 = 0, prev1 = 1, current = 0;
    while (1) {
        if (n == 0) current = 0;
        else if (n == 1) current = 1;
        else {
            current = prev1 + prev2;
            if (current < prev1) {
                printf("Max n: %u\n", n - 1);
                printf("Max Fibonacci value: %llu\n", prev1);
                break;
            }
            prev2 = prev1;
            prev1 = current;
        }
        n++;
    }
    return 0;
}
