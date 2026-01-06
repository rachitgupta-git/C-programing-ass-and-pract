#include <stdio.h>

int main()
{
    int choice, quantity;
    float total = 0;

    printf("WELCOME TO TASTE RESTAURANT\n");
    printf("1. Burger   Rs.50\n");
    printf("2. Pizza    Rs.120\n");
    printf("3. Sandwich Rs.60\n");
    printf("4. Tea      Rs.20\n");
    printf("5. Coffee   Rs.40\n");
    printf("6. Exit\n");

    while (1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 6)
        {
            break;
        }

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        if (choice == 1)
        {
            total = total + (50 * quantity);
        }
        else if (choice == 2)
        {
            total = total + (120 * quantity);
        }
        else if (choice == 3)
        {
            total = total + (60 * quantity);
        }
        else if (choice == 4)
        {
            total = total + (20 * quantity);
        }
        else if (choice == 5)
        {
            total = total + (40 * quantity);
        }
        else
        {
            printf("Invalid choice");
        }
    }

    printf("\nTotal Bill Amount = Rs %.2f\n", total);
    printf("Thank you for visiting");

    return 0;
}