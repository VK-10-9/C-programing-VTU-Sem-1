#include <stdio.h>

int main() {
    // Declare variables
    int row, i, j, space, num;
    
    // Prompt user for input
    printf("Enter the number of rows to be in the pattern");
    scanf("%d", &row);
    
    // Outer loop for each row
    for (i = 1; i <= row; i++) {
        // Loop for printing spaces
        for (space = 1; space <= row - i; space++) {
            printf(" ");
        }
        // Loop for printing increasing numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Loop for printing decreasing numbers
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        // Move to next line after each row
        printf("\n");
    }
    return 0;
}
