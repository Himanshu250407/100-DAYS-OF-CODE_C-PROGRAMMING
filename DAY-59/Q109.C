#include <stdio.h>

int main()
{
    int arr[100], n, k, i;
    int sum = 0, maxSum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    if(k <= 0 || k > n)
    {
        printf("Invalid k");
        return 0;
    }

    for(i = 0; i < k; i++)
        sum += arr[i];

    maxSum = sum;

    for(i = k; i < n; i++)
    {
        sum += arr[i] - arr[i - k];

        if(sum > maxSum)
            maxSum = sum;
    }

    printf("%d", maxSum);

    return 0;
}
