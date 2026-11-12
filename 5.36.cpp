#include <stdio.h>

void hanoi(int n, char from_peg, char to_peg, char aux_peg) {
    if (n == 1) {
        printf("%c -> %c\n", from_peg, to_peg);
        return;
    }
    hanoi(n - 1, from_peg, aux_peg, to_peg);
    printf("%c -> %c\n", from_peg, to_peg);
    hanoi(n - 1, aux_peg, to_peg, from_peg);
}

int main(void) {
    int disks = 3;
    printf("Hanoi with %d disks:\n", disks);
    hanoi(disks, 'A', 'C', 'B');
    return 0;
}
