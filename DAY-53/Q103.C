#include <stdio.h>

int main()
{
    int nums[100], n, i;
    int total = 0, left = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        total += nums[i];
    }

    for(i = 0; i < n; i++)
    {
        if(left == total - left - nums[i])
        {
            printf("%d", i);
            return 0;
        }

        left += nums[i];
    }

    printf("-1");

    return 0;
}
