#include <stdio.h>

enum Values
{
    FIRST = 10,
    SECOND,
    THIRD,
    FOURTH
};

int main()
{
    printf("FIRST = %d\n", FIRST);
    printf("SECOND = %d\n", SECOND);
    printf("THIRD = %d\n", THIRD);
    printf("FOURTH = %d\n", FOURTH);

    return 0;
}
