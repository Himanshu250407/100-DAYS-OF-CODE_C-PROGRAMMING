#include <stdio.h>
#include <string.h>

int main()
{
    char s[200];
    int last[256];
    int i, start = 0, maxLength = 0, length;

    printf("Enter string: ");
    scanf("%199s", s);

    for(i = 0; i < 256; i++)
        last[i] = -1;

    for(i = 0; s[i] != '\0'; i++)
    {
        unsigned char ch = s[i];

        if(last[ch] >= start)
            start = last[ch] + 1;

        last[ch] = i;

        length = i - start + 1;

        if(length > maxLength)
            maxLength = length;
    }

    printf("%d", maxLength);

    return 0;
}
