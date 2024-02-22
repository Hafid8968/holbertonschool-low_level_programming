#include <stdio.h>

int main(void) {
        char numbers;

        for (numbers = '0'; numbers <= '9'; numbers++) {
            putchar(numbers);
        }

        /* Ajout d'un saut de ligne pour une meilleure lisibilité */
        putchar('\n');

        return 0;
}
