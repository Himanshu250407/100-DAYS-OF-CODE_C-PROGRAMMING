#include <stdio.h>

int main()
{
    char str[100];
    int freq[26] = {0};
    int i;

    printf("Enter a lowercase string: ");
    scanf("%99s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        int index = str[i] - 'a';

        if(freq[index] == 1)
        {
            printf("First repeating alphabet = %c", str[i]);
            return 0;
        }

        freq[index]++;
    }

    printf("No repeating alphabet");

    return 0;
}
