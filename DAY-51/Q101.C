#include <stdio.h>

int main()
{
    int nums[100], n, target, i;
    int first = -1, last = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++)
    {
        if(nums[i] == target)
        {
            if(first == -1)
                first = i;

            last = i;
        }
    }

    printf("%d,%d", first, last);

    return 0;
}
