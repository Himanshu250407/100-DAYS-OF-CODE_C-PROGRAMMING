#include <stdio.h>

int main()
{
    int n, x;
    long long total, left;

    printf("Enter n: ");
    scanf("%d", &n);

    total = (long long)n * (n + 1) / 2;
    left = 0;

    for(x = 1; x <= n; x++)
    {
        left += x;

        if(left == total - left + x)
        {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");

    return 0;
}
