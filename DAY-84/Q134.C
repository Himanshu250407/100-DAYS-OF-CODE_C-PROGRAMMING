#include <stdio.h>

enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    enum Status status;
    int choice;

    printf("Enter 0 for SUCCESS, 1 for FAILURE, 2 for TIMEOUT: ");
    scanf("%d", &choice);

    status = choice;

    switch(status)
    {
        case SUCCESS:
            printf("Operation successful");
            break;

        case FAILURE:
            printf("Operation failed");
            break;

        case TIMEOUT:
            printf("Operation timed out");
            break;

        default:
            printf("Invalid status");
    }

    return 0;
}
