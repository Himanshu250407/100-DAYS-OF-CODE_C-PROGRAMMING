#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[100];
    int ch;
    int vowels = 0, consonants = 0;

    printf("Enter filename: ");
    scanf("%99s", filename);

    fp = fopen(filename, "r");

    if(fp == NULL)
    {
        printf("Unable to open file");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        if(ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if(ch >= 'a' && ch <= 'z')
        {
            if(ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d", consonants);

    return 0;
}
