#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceName[100], destinationName[100];
    int ch;

    printf("Enter source filename: ");
    scanf("%99s", sourceName);

    printf("Enter destination filename: ");
    scanf("%99s", destinationName);

    source = fopen(sourceName, "r");

    if(source == NULL)
    {
        printf("Unable to open source file");
        return 1;
    }

    destination = fopen(destinationName, "w");

    if(destination == NULL)
    {
        printf("Unable to create destination file");
        fclose(source);
        return 1;
    }

    while((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully.");

    return 0;
}
