#include <stdio.h>

int recursiveSum(int n) {
    if (n==0)
        return 0;
    else
        return n%10 + recursiveSum(n/10);
}

int main() {
    printf("%d", recursiveSum(1234));
    return 0;
}
