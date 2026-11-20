#include <stdio.h>

enum Gender
{
    MALE,
    FEMALE,
    OTHER
};

struct Person
{
    char name[50];
    enum Gender gender;
};

int main()
{
    struct Person p;
    int choice;

    printf("Enter name: ");
    scanf("%49s", p.name);

    printf("Enter gender (0-Male, 1-Female, 2-Other): ");
    scanf("%d", &choice);

    p.gender = (enum Gender)choice;

    printf("Name: %s\n", p.name);

    if(p.gender == MALE)
        printf("Gender: Male");
    else if(p.gender == FEMALE)
        printf("Gender: Female");
    else if(p.gender == OTHER)
        printf("Gender: Other");
    else
        printf("Invalid gender");

    return 0;
}
