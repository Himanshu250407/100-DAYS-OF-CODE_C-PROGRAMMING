#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    long long expectedSum, actualSum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        actualSum += arr[i];
    }

    expectedSum = (long long)n * (n + 1) / 2;

    printf("%lld", expectedSum - actualSum);

    return 0;
}
