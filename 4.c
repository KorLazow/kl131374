#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicjalizacja generatora liczb pseudolosowych
    srand(time(NULL));

    // Deklaracja zmiennych
    int n, liczba;
    int sumaParzystych = 0;

    // Wprowadzenie liczby elementów w ciągu
    printf("Podaj liczbe elementow w ciagu: ");
    scanf("%d", &n);

    // Pętla do generowania i obliczania ciągu
    for (int i = 0; i < n; i++) {
        // Wygenerowanie losowej liczby z przedziału (-10, 45)
        liczba = rand() % 56 - 10;

        printf("Liczba %d: %d\n", i + 1, liczba);

        // Sprawdzenie, czy liczba jest parzysta
        if (liczba % 2 == 0) {
            sumaParzystych += liczba;
        }
    }

    // Wyświetlenie wyniku
