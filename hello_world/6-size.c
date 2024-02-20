#include <stdio.h>

/**
 * main - Utilisation de sizeof pour obtenir la taille des types de données
 *
 * Return: 0
 */

int main(void) 
{
    // Utilisation de sizeof pour obtenir la taille des types de données
    printf("Size of a char: %zu byte(s)\n", sizeof(char));
    printf("Size of an int: %zu byte(s)\n", sizeof(int));
    printf("Size of an int: %zu byte(s)\n", sizeof(long int));
    printf("Size of an int: %zu byte(s)\n", sizeof(long long int));
    printf("Size of an int: %zu byte(s)\n", sizeof(float));

    return 0;
}
