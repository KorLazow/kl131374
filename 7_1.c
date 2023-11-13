#include <stdio.h>

int main() {
    int i, j;

    // Generowanie choinki
    printf("Choinka:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j <= i; j++)
            printf("X");
        printf("\n");
    }

    // Obracanie choinki do góry nogami
    printf("\nChoinka po obrocie do gory nogami:\n");
    for (i = 9; i >= 0; i--) {
        for (j = 0; j <= i; j++)
            printf("X");
        printf("\n");
    }

    return 0;
}

