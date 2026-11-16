#include <stdio.h>

int main()
{
    int nums[100], n, i;
    int candidate = 0, count = 0;
    int frequency = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for(i = 0; i < n; i++)
    {
        if(count == 0)
        {
            candidate = nums[i];
            count = 1;
        }
        else if(nums[i] == candidate)
            count++;
        else
            count--;
    }

    for(i = 0; i < n; i++)
    {
        if(nums[i] == candidate)
            frequency++;
    }

    if(frequency > n / 2)
        printf("%d", candidate);
    else
        printf("-1");

    return 0;
}
