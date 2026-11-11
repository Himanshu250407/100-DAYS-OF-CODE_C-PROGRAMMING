#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j, last;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    k = k % n;

    for(i = 0; i < k; i++)
    {
        last = arr[n - 1];

        for(j = n - 1; j > 0; j--)
            arr[j] = arr[j - 1];

        arr[0] = last;
    }

    printf("Array after rotation: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
