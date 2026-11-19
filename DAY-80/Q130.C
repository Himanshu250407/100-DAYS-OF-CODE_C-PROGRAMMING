#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int roll;
    float marks;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    fp = fopen("students.txt", "w");

    if(fp == NULL)
    {
        printf("Unable to create file");
        return 1;
    }

    for(i = 0; i < n; i++)
    {
        printf("\nEnter student %d details:\n", i + 1);

        printf("Name: ");
        scanf("%49s", name);

        printf("Roll number: ");
        scanf("%d", &roll);

        printf("Marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    if(fp == NULL)
    {
        printf("Unable to open file");
        return 1;
    }

    printf("\nStudent Records:\n");

    while(fscanf(fp, "%49s %d %f", name, &roll, &marks) == 3)
    {
        printf("Name: %s\n", name);
        printf("Roll Number: %d\n", roll);
        printf("Marks: %.2f\n\n", marks);
    }

    fclose(fp);

    return 0;
}
