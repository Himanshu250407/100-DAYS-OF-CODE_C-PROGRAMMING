#include <stdio.h>

int main()
{
    int arr[100], n, k;
    int i, j, firstNegative;

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

    for(i = 0; i <= n - k; i++)
    {
        firstNegative = 0;

        for(j = i; j < i + k; j++)
        {
            if(arr[j] < 0)
            {
                firstNegative = arr[j];
                break;
            }
        }

        printf("%d", firstNegative);

        if(i < n - k)
            printf(" ");
    }

    return 0;
}
