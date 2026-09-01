#include <stdio.h>

int main() {
    float radius;
    const float PI = 3.14159;

    scanf("%f", &radius);

    printf("Area=%.2f\n", PI * radius * radius);
    printf("Circumference=%.2f\n", 2 * PI * radius);

    return 0;
}