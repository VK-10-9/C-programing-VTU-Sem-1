#include <stdio.h>

int main()
{
    char opra;
    double num1, num2, result, num21, result2;

    // Welcome message
    printf("Hi!!\nYou are using a Calculator");

    // Prompt user to enter the operation
    printf("\nEnter the operation\n '+'      '-'       '*'       '/': ");
    scanf(" %c", &opra); // Note the space before %c to consume any leading whitespace
    printf("\nYour entered operation is: '%c'", opra);

    // Check if the entered operation is valid
    if (opra != '+' && opra != '-' && opra != '*' && opra != '/')
    {
        printf("\nYou have entered a wrong value\n");
    }
    else
    {
        // Prompt user to enter the numbers
        printf("\nEnter your first number: ");
        scanf("%lf", &num1);

        printf("Enter your second number: ");
        scanf("%lf", &num2);

        // Display the entered numbers
        printf("\nYour first number is: %.2lf\n", num1);
        printf("Your second number is: %.2lf\n", num2);

        // Perform the selected operation using switch-case
        switch (opra)
        {
            case '+':
                result = num1 + num2;
                printf("Your result of operation '+' is: %.2lf\n", result);
                break;

            case '-':
                result = num1 - num2;
                printf("Your result of operation '-' is: %.2lf\n", result);
                break;

            case '*':
                result = num1 * num2;
                printf("Your result of operation '*' is: %.2lf\n", result);
                break;

            case '/':
                if (num2 != 0)
                {
                    result = num1 / num2;
                    printf("Your result of operation '/' is: %.2lf\n", result);
                }
                else
                {
                    printf("Error! Division by zero.\n");
                    printf("Enter a different number as you had entered 0: ");
                    scanf("%lf", &num21);

                    // Check if num21 is not zero before performing division
                    if (num21 != 0)
                    {
                        result2 = num1 / num21;
                        printf("Your result of operation '/' with new number is: %.2lf\n", result2);
                    }
                    else
                    {
                        printf("Error! Still division by zero. Exiting...\n");
                        return 1; // Exit the program with an error code
                    }
                }
                break;
        }
    }

    printf("\n-------------------THANK YOU XD----------------------");

    return 0;
}
