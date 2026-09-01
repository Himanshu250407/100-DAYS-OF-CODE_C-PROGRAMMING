#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    printf("Sum=%d\n", a + b);
    printf("Diff=%d\n", a - b);
    printf("Product=%d\n", a * b);
    printf("Quotient=%d\n", a / b);

    return 0;
}