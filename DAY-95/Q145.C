#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTop(struct Student s[], int n)
{
    int i;
    struct Student top = s[0];

    for(i = 1; i < n; i++)
    {
        if(s[i].marks > top.marks)
            top = s[i];
    }

    return top;
}

int main()
{
    struct Student students[5];
    struct Student top;
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Enter name: ");
        scanf("%49s", students[i].name);

        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    top = findTop(students, 5);

    printf("\nTop Student:\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
