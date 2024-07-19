#include <stdio.h>
#include <unistd.h>

int main() {
    int a11, a12, a21, a22, b11, b12, b21, b22, c11, c12, c21, c22;

    printf("\nEnter the following values for 2 X 2 matrix multiplication:");
    printf("\nEnter the following values for A matrix:");
    printf("\nEnter the A11 value: ");
    scanf("%d", &a11);
    printf("Enter the A12 value: ");
    scanf("%d", &a12);
    printf("Enter the A21 value: ");
    scanf("%d", &a21);
    printf("Enter the A22 value: ");
    scanf("%d", &a22);

    printf("\nEnter the following values for B matrix:");
    printf("\nEnter the B11 value: ");
    scanf("%d", &b11);
    printf("Enter the B12 value: ");
    scanf("%d", &b12);
    printf("Enter the B21 value: ");
    scanf("%d", &b21);
    printf("Enter the B22 value: ");
    scanf("%d", &b22);

    printf("\nYou have entered the following values of A and B matrix:");
    printf("\nIt is for the A matrix:\n");
    printf("%d      %d\n%d      %d\n", a11, a12, a21, a22);

    printf("\nIt is for the B matrix:\n");
    printf("%d      %d\n%d      %d\n", b11, b12, b21, b22);

    printf("\nThe matrix multiplication will take place as A X B = C");
    sleep(5);

    printf("\nC is the new matrix which is formed with the help of multiplication of A and B matrix");
    sleep(5);

    c11 = a11 * b11 + a12 * b21;
    printf("\nThis is the value of C11 matrix: %d", c11);
    sleep(3);

    c12 = a11 * b12 + a12 * b22;
    printf("\nThis is the value of C12 matrix: %d", c12);
    sleep(3);

    c21 = a21 * b11 + a22 * b21;
    printf("\nThis is the value of C21 matrix: %d", c21);
    sleep(3);

    c22 = a21 * b12 + a22 * b22;
    printf("\nThis is the value of C22 matrix: %d", c22);
    sleep(3);

    printf("\nThe new matrix C is:");
    printf("\n      %d      %d\n      %d      %d", c11, c12, c21, c22);
    printf("\n---------------------------THANK YOU---------------------------");
    sleep(6);

    return 0;
}
