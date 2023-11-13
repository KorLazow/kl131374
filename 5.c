#include <stdio.h>

int main() {
    // Deklaracja zmiennych
    int n, i = 0, punkty, sumaPunktow = 0;

    // Wprowadzenie liczby studentów
    printf("Podaj liczbe studentow w grupie: ");
    scanf("%d", &n);

    // Pętla do wprowadzania liczby punktów dla każdego studenta
    while (i < n) {
        printf("Podaj liczbe punktow dla studenta %d: ", i + 1);
        scanf("%d", &punkty);

        // Dodanie punktów do sumy
        sumaPunktow += punkty;

        // Inkrementacja licznika
        i++;
    }

    // Obliczenie średniej
    if (n > 0) {
        double srednia = (double)sumaPunktow / n;

        // Wyświetlenie wyniku
        printf("Srednia liczba punktow w grupie: %.2lf\n", srednia);
    } else {
        printf("Nie podano żadnej liczby studentow.\n");
    }

    return 0;
}
