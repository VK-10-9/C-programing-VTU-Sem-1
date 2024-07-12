#include <stdio.h>

int main() {
    int num, revnum = 0, remainder, ognum;

    // Prompt user to enter a number
    printf("Enter the number to check if it is a palindrome or not: ");
    scanf("%d", &num);
    
    // Display the entered number
    printf("Your entered number is: %d", num);
    
    // Store the original number
    ognum = num;
    
    // Check if the entered number is negative
    if (num < 0) {
        printf("\nThe entered number %d is invalid ", num);
        return 0;
    }
    
    // Reverse the number
    while (num != 0) { 
        remainder = num % 10;             // Get the last digit
        revnum = revnum * 10 + remainder; // Append it to the reversed number
        num /= 10;                        // Remove the last digit
    }

    // Display the reversed number
    printf("\nYour reversed number is: %d", revnum);
    
    // Check if the original number is equal to the reversed number
    if (ognum == revnum) {
        printf("\nThe given number is a palindrome\n");
    } else {
        printf("The given number is not a palindrome\n");
    }

    return 0;
}
