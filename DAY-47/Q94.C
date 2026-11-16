#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[200];
    char longest[100] = "";
    char current[100];
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while(1)
    {
        if(sentence[i] != ' ' &&
           sentence[i] != '\n' &&
           sentence[i] != '\0')
        {
            current[j++] = sentence[i];
        }
        else
        {
            current[j] = '\0';

            if(j > strlen(longest))
                strcpy(longest, current);

            j = 0;

            if(sentence[i] == '\0')
                break;
        }

        i++;
    }

    printf("Longest word = %s", longest);

    return 0;
}
