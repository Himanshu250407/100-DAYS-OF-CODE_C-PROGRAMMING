#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("String without vowels: ");

    for(i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if(ch != 'a' && ch != 'e' && ch != 'i' &&
           ch != 'o' && ch != 'u' &&
           ch != 'A' && ch != 'E' && ch != 'I' &&
           ch != 'O' && ch != 'U')
        {
            printf("%c", ch);
        }
    }

    return 0;
}
