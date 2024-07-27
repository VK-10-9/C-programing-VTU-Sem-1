#include <stdio.h>  // Include standard input/output library

int main()
{
    // Declare variables
    int n, i;  // n for number of students, i for loop counter
    float mark, sum = 0, avg;  // mark for individual student marks, sum for total, avg for average

    // Input number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Loop to input marks for each student
    for (i = 0; i < n; i++)
    {
        printf("Marks for student %d:", i+1);  // Prompt for each student's mark
        scanf("%f", &mark);  // Read the mark
        sum += mark;  // Add the mark to the sum
    }

    // Calculate average
    avg = sum / n;

    // Print the average marks
    printf("Avg marks is: %.2f\n", avg);

    return 0;  // End the program
}
