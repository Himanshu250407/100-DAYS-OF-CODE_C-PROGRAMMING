#include <stdio.h>

int main()
{
    char str[200];
    int i, newSentence = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(newSentence && str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
            newSentence = 0;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
            newSentence = 0;
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            newSentence = 0;
        }

        if(str[i] == '.' || str[i] == '!' || str[i] == '?')
            newSentence = 1;
    }

    printf("%s", str);

    return 0;
}
