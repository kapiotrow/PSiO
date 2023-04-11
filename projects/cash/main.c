#include <stdio.h>

int main() {
    const int dollars = 5;
    printf("$%d = %7.2f eur\n", dollars, dollars * 0.77);
    printf("$%d = %7.2f pln", dollars, dollars * 3.04);
    return 0;
}
