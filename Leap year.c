#include <stdio.h>

int main() {
    int year;
    
    printf("Enter a year to check if it is a leap year or not: ");
    scanf("%d", &year);
    
    if ((year % 4 == 0 && year % 100)||(year % 400 == 0)) {
        printf("The year entered is a leap year (%d)",year);
    } else {
        printf("The year entered is not a leap year (%d)",year);
    }
    
    return 0;
}
