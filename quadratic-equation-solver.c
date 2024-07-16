#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables to store coefficients, discriminant, roots, and parts of complex roots
    double a, b, c;
    double disc, root1, root2, realpart, imagepart;
    
    // Prompt the user to enter the coefficients of the quadratic equation
    printf("\nEnter the First coefficient A: ");
    scanf("%lf", &a);
    
    printf("\nEnter the Second coefficient B: ");
    scanf("%lf", &b);
    
    printf("\nEnter the Third coefficient C: ");
    scanf("%lf", &c);
    
    // Display the entered coefficients
    printf("You have entered the value of A: %0.2lf\nYou have entered the value of B: %0.2lf\nYou have entered the value of C: %0.2lf", a, b, c);
    
    // Calculate the discriminant
    disc = b * b - 4 * a * c;
    
    // Display the discriminant
    printf("\nYour Discriminant is: %0.2lf", disc);
    
    // Check the nature of the discriminant and calculate roots accordingly
    if (disc > 0) {
        // Discriminant is positive: roots are real and different
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("\nRoots are real and different.");
        printf("\n1st Root is: %0.2lf", root1);
        printf("\n2nd Root is: %0.2lf", root2);
    } else if (disc == 0) {
        // Discriminant is zero: roots are real and the same
        root1 = root2 = -b / (2 * a);
        printf("\nRoots are real and the same:");
        printf("\nRoot 1 = Root 2 = %.2lf\n", root1);
    } else {
        // Discriminant is negative: roots are complex and different
        realpart = -b / (2 * a);
        imagepart = sqrt(-disc) / (2 * a);
        printf("\nRoots are complex and different.");
        printf("\nRoot 1 = %.2lf + %.2lfi", realpart, imagepart);
        printf("\nRoot 2 = %.2lf - %.2lfi", realpart, imagepart);
    }
    
    // Display a thank you message
    printf("\n------------THANK YOU-----------------");
    printf("\nwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww");
    
    return 0;
}
