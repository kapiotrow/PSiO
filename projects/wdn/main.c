#include <stdio.h>

int main() {
    int dzien = 0;
    printf("podaj liczbe od 1 do 7: ");
    scanf("%d", &dzien);
    switch (dzien) {
        case 1: printf("pn");
            break;
        case 2: printf("wt");
            break;
        case 3: printf("sr");
            break;
        case 4: printf("czw");
            break;
        case 5: printf("pt");
            break;
        case 6: printf("sb");
            break;
        case 7: printf("nd");
            break;
        default: "niepoprawna liczba";
    }
}
