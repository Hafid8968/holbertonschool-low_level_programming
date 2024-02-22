#include <stdio.h>

int main(void) {
        int numbers;

        for (numbers = '0'; numbers <= '10'; numbers++) {
            putchar(numbers);
        }

        /* Ajout d'un saut de ligne pour une meilleure lisibilité */
        putchar('\n');

        return 0;
}
