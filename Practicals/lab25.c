#include <stdio.h>

int main()
{
    int day;

    printf("Weekly Lecture Schedule\n");
    printf("1. Monday\n");
    printf("2. Tuesday\n");
    printf("3. Wednesday\n");
    printf("4. Thursday\n");
    printf("5. Friday\n");
    printf("6. Saturday\n");

    printf("\nEnter day number (1-6): ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday: Mathematics\n");
        break;

    case 2:
        printf("Tuesday: Physics\n");
        break;

    case 3:
        printf("Wednesday: C Programming\n");
        break;

    case 4:
        printf("Thursday: Data Structures\n");
        break;

    case 5:
        printf("Friday: Digital Electronics\n");
        break;

    case 6:
        printf("Saturday: Seminar / Lab\n");
        break;

    default:
        printf("Invalid input! Please enter between 1 to 6.\n");
    }

    return 0;
}