#include <stdio.h>

int main() {
    // a) Ciąg liczb od 1 do 100
    printf("a) Ciag liczb od 1 do 100: ");
    for (int i = 1; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // b) Ciąg liczb od 100 do 0
    printf("b) Ciag liczb od 100 do 0: ");
    for (int i = 100; i >= 0; i--) {
        printf("%d ", i);
    }
    printf("\n");

    // c) Ciąg liczb od 7 do 77 z krokiem 7
    printf("c) Ciag liczb od 7 do 77 z krokiem 7: ");
    for (int i = 7; i <= 77; i += 7) {
        printf("%d ", i);
    }
    printf("\n");

    // d) Ciąg liczb od 20 do 0 z krokiem -2
    printf("d) Ciag liczb od 20 do 0 z krokiem -2: ");
    for (int i = 20; i >= 0; i -= 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
