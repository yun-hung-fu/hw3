#include <stdio.h>

long long power(long long base, int exponent) {
    if (exponent == 1) {
        return base;
    }
    return base * power(base, exponent - 1);
}

int main(void) {
    long long base = 3;
    int exponent = 4;
    printf("power(%lld, %d) = %lld\n", base, exponent, power(base, exponent));
    return 0;
}
