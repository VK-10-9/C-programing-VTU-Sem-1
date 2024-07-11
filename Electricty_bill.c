/* An electricity board charges the following rates for the use of electricity:
   for the first 200 units 80 paise per unit; for the next 100 units 90 paise per unit;
   beyond 300 units rupees 1 per unit. 
   All users are charged a minimum of rupees 100 as a meter charge. 
   If the total amount is more than Rs 400, then an additional surcharge of 15% of the total amount is charged.
   Write a program to read the name of the user, the number of units consumed, and print out the charges */

#include <stdio.h>

int main() {
    char name[50];
    int unit;
    float total, final, sub = 0.0;

    // Read the name of the user
    printf("Enter the name of the user: ");
    scanf("%s", name);

    // Read the number of units consumed
    printf("Enter the electricity consumption units: ");
    scanf("%d", &unit);

    // Calculate the total charge based on units consumed
    if (unit <= 200 && unit > 0) {
        total = unit * 0.80;
    } else if (unit <= 300 && unit > 200) {
        total = (200 * 0.80) + ((unit - 200) * 0.90);
    } else if (unit > 300) {
        total = (200 * 0.80) + (100 * 0.90) + ((unit - 300) * 1.00);
    } else {
        // Handle invalid input for units
        printf("Entered input %d is invalid", unit);
        printf("\n------------THANK YOU XD-------------");
        return 0;
    }

    // Add the minimum meter charge
    final = total + 100;

    // Calculate surcharge if total amount exceeds Rs 400
    if (final > 400) {
        sub = final * 0.15;
    }

    // Add surcharge to the final amount
    final += sub;

    // Print the electricity bill
    printf("\nElectricity Bill\n");
    printf("User Name: %s\n", name);
    printf("Units Consumed: %d\n", unit);
    printf("Your electricity bill: Rs. %.2f", final);
    printf("\n------------THANK YOU XD-------------");

    return 0;
}
