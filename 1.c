#include <stdio.h>

int main() {
    // Deklaracja zmiennych
    double liczba, suma = 0, srednia, maksimum = 0;
    int ilosc = 0;

    // Pętla do wprowadzania liczb
    do {
        // Wprowadzenie liczby
        printf("Podaj liczbe (wpisz liczbe < 0 aby zakonczyc): ");
        scanf("%lf", &liczba);

        // Sprawdzenie, czy liczba jest mniejsza niż 0
        if (liczba < 0) {
            break;
        }

        // Aktualizacja sumy
        suma += liczba;

        // Aktualizacja ilości liczb
        ilosc++;

        // Aktualizacja wartości maksymalnej
        if (liczba > maksimum) {
            maksimum = liczba;
        }

    } while (1);

    // Sprawdzenie, czy wprowadzono jakiekolwiek liczby
    if (ilosc > 0) {
        // Obliczenie średniej
        srednia = suma / ilosc;

        // Wyświetlenie wyników
        printf("\nSuma: %.2lf\n", suma);
        printf("Srednia: %.2lf\n", srednia);
        printf("Wartosc maksymalna: %.2lf\n", maksimum);
    } else {
        printf("\nNie wprowadzono zadnych liczb.\n");
    }

    return 0;
}
