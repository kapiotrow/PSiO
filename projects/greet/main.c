#include <stdio.h>

void greet(int n) {
    for (int i=0; i<n; i++)
        printf("dzien dobry!\n");
}

int main() {
    int n=6;
    printf("podaj liczbe: ");
    scanf("%d", &n);
    greet(n);
    return 0;
}
