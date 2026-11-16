#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int freq[256] = {0};
    int i;

    printf("Enter two strings: ");
    scanf("%99s %99s", str1, str2);

    if(strlen(str1) != strlen(str2))
    {
        printf("Not anagrams");
        return 0;
    }

    for(i = 0; str1[i] != '\0'; i++)
    {
        freq[(unsigned char)str1[i]]++;
        freq[(unsigned char)str2[i]]--;
    }

    for(i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
        {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}
