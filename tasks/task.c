#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    if (argc != 3)
    {
        printf("Usage: %s <Integer1> <Integer2>\n", argv[0]);
        return 0;
    }

    int num1 = atoi(argv[1]);
    if (num1 < 1)
    {
        printf("Invalid First Integer\n");
        return 1;
    }

    int num2 = atoi(argv[2]);
    if (num2 < 1)
    {
        printf("Invalid Second Integer\n");
        return 2;
    }

    // Prompt the user for input
    // printf("Enter the first number: ");
    // scanf("%d", &num1);

    // printf("Enter the second number: ");
    // scanf("%d", &num2);

    // Calculate and print the sum
    int sum = atoi(argv[1]) + atoi(argv[2]);
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
