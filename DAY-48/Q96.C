#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int i, start = 0, end, j;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; ; i++)
    {
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
        {
            end = i - 1;

            for(j = end; j >= start; j--)
                printf("%c", str[j]);

            if(str[i] == ' ')
                printf(" ");

            start = i + 1;

            if(str[i] == '\n' || str[i] == '\0')
                break;
        }
    }

    return 0;
}
