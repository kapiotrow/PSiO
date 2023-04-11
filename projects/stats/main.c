#include <stdio.h>

int main() {
    const double x = 3.5;
    const double y = 4.0;
    const double z = 5.7;
    const double sum = x + y + z;
    const double avg = sum/3;
    printf("sum = %f\n", sum);
    printf("avg = %f", avg);
    return 0;
}
