#include <stdio.h>

int main()
{
    int nums[100], answer[100];
    int n, i;
    int prefix = 1, suffix = 1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for(i = 0; i < n; i++)
    {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    for(i = n - 1; i >= 0; i--)
    {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    for(i = 0; i < n; i++)
    {
        printf("%d", answer[i]);

        if(i < n - 1)
            printf(" ");
    }

    return 0;
}
