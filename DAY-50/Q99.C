#include <stdio.h>

int main()
{
    int day, month, year;
    char *months[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    if(month >= 1 && month <= 12)
        printf("%02d-%s-%04d", day, months[month], year);
    else
        printf("Invalid month");

    return 0;
}
