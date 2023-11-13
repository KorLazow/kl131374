#include <stdio.h>

int main() {
    int liczba;
    int iloscDodatnich = 0, iloscUjemnych = 0;
    int sumaDodatnich = 0, sumaUjemnych = 0;

    printf("Podaj 10 liczb:\n");

    for (int i = 0; i < 10; i++) {
        printf("Liczba %d: ", i + 1);
        scanf("%d", &liczba);

        if (liczba > 0) {
            iloscDodatnich++;
            sumaDodatnich += liczba;
        } else if (liczba < 0) {
            iloscUjemnych++;
            sumaUjemnych += liczba;
        }
    }

    printf("Ilość liczb dodatnich: %d\n", iloscDodatnich);
    printf("Suma liczb dodatnich: %d\n", sumaDodatnich);
    printf("Ilość liczb ujemnych: %d\n", iloscUjemnych);
    printf("Suma liczb ujemnych: %d\n", sumaUjemnych);

    return 0;
}e0Ok1