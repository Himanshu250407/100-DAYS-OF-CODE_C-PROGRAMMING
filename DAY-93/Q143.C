#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

int main()
{
    struct Student students[5];
    int i, top = 0;

    for(i = 0; i < 5; i++)
    {
        printf("Enter name: ");
        scanf("%49s", students[i].name);

        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    for(i = 1; i < 5; i++)
    {
        if(students[i].marks > students[top].marks)
            top = i;
    }

    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", students[top].name);
    printf("Roll Number: %d\n", students[top].roll_no);
    printf("Marks: %.2f\n", students[top].marks);

    return 0;
}
