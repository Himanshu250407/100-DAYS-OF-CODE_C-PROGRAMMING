#include <stdio.h>

int main()
{
    int arr[100], n, x, i;
    int result = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter x: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++)
    {
        if(arr[i] >= x)
        {
            result = i;
            break;
        }
    }

    printf("%d", result);

    return 0;
}
