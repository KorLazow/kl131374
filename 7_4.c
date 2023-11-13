#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i < 10; i++) {
        // Wyświetl puste miejsca przed x-ami
        for (j = 0; j < 10 - i - 1; j++) {
            printf(" ");
        }
        
        // Wyświetl x-y
        for (j = 0; j <= i; j++) {
            printf("X");
        }

        // Wyświetl drugą stronę choinki po prawej stronie
        for (j = 0; j < i; j++) {
            printf("X");
        }

        // Przejdź do nowej linii
        printf("\n");
    }

    return 0;
}
