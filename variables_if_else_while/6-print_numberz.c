#include <stdio.h>

int main(void) {
    int numbers;

    for (numbers = 0; numbers <= 9; numbers++) {
        putchar('0' + numbers);
    }

    /* Ajout d'un saut de ligne pour une meilleure lisibilité */
    putchar('\n');

    return 0;
}

