#include <stdio.h>

char changeCase(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    } else if (c >= 'a' && c <= 'z') {
        return c - 32;
    }
    return c;
}

int main(void) {
    printf("Test 'Z': %c\n", changeCase('Z'));
    printf("Test 'a': %c\n", changeCase('a'));
    return 0;
}
