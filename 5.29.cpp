#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main(void) {
    int num1 = 4, num2 = 6;
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm(num1, num2));
    return 0;
}
