#include <stdio.h>

int main()
{
    FILE *fp;
    int num;
    int sum = 0, count = 0;
    float average;

    fp = fopen("numbers.txt", "r");

    if(fp == NULL)
    {
        printf("Unable to open numbers.txt");
        return 1;
    }

    while(fscanf(fp, "%d", &num) == 1)
    {
        sum += num;
        count++;
    }

    fclose(fp);

    if(count == 0)
    {
        printf("File contains no numbers.");
        return 0;
    }

    average = (float)sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", average);

    return 0;
}
