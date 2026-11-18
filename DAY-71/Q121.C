#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int age;

    printf("Enter name: ");
    scanf("%49s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    fp = fopen("info.txt", "w");

    if(fp == NULL)
    {
        printf("Unable to create file");
        return 1;
    }

    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);

    fclose(fp);

    printf("Data successfully saved.");

    return 0;
}
