#include <stdio.h>

int main(void) {
        char alphabet;

        for (alphabet = 'a'; alphabet <= 'z'; alphabet++) {
            putchar(alphabet);
        }

        for (alphabet = 'A'; alphabet <= 'Z'; alphabet++) {
            putchar(alphabet);
        }

        /* Ajout d'un saut de ligne pour une meilleure lisibilité */
        putchar('\n');

        return 0;
}
