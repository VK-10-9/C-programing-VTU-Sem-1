//Palindrome Checker
#include <stdio.h>

int main()
{
    int num, revnum = 0, remainder, ognum;

    // Prompt the user to enter a number
    printf("Enter the number to check if it is a palindrome or not: ");
    scanf("%d", &num);

    // Store the original number for comparison later
    ognum = num;

    // Reverse the number
    while (num != 0)
    {
        remainder = num % 10;            // Get the last digit of num
        revnum = revnum * 10 + remainder; // Append the last digit to revnum
        num /= 10;                       // Remove the last digit from num
    }

    // Check if the original number is equal to the reversed number
    if (ognum == revnum)
    {
        printf("The given number is a palindrome\n");
    } 
    else 
    {
        printf("The given number is not a palindrome\n");
    }

    return 0;
}
