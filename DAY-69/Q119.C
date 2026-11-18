#include <stdio.h>

int main()
{
    int arr[100], n, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d", arr[i]);
                return 0;
            }
        }
    }

    printf("No repeated element");

    return 0;
}
