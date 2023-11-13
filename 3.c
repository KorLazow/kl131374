#include <stdio.h>

int main() {
    // Deklaracja zmiennych
    int n, liczba;
    int sumaParzystych = 0;

    // Wprowadzenie liczby elementów w ciągu
    printf("Podaj liczbe elementow w ciagu: ");
    scanf("%d", &n);

    // Pętla do wprowadzania ciągu
    for (int i = 0; i < n; i++) {
        printf("Podaj %d. liczbe: ", i + 1);
        scanf("%d", &liczba);

        // Sprawdzenie, czy liczba jest parzysta
        if (liczba % 2 == 0) {
            sumaParzystych += liczba;
        }
    }

    // Wyświetlenie wyniku
    printf("Suma liczb parzystych: %d\n", sumaParzystych);

    return 0;
}