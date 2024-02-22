#include <stdio.h>

int main(void) {
        char alphabet;

        for (alphabet = 'a'; alphabet <= 'z'; alphabet++) {
            /* Exclude the letters 'e' and 'i' from printing */
            if (alphabet != 'e' && alphabet != 'q') {
                putchar(alphabet);
            }
        }

        /* Ajout d'un saut de ligne pour une meilleure lisibilité */
        putchar('\n');

        return 0;
}
