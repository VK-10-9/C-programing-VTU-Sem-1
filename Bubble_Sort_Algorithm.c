#include <stdio.h>

int main() {
    int arr[50], num, a, b, temp;

    // Prompt user for the number of elements
    printf("\nEnter the number of elements\n");
    scanf("%d", &num);

    // Prompt user to enter the elements
    printf("Enter %d Elements\n", num);
    for (a = 0; a < num; a++)
        scanf("%d", &arr[a]);

    // Bubble sort algorithm
    for (a = 0; a < num - 1; a++) {
        for (b = 0; b < num - a - 1; b++) {
            if (arr[b] > arr[b + 1]) {
                // Swap the elements
                temp = arr[b];
                arr[b] = arr[b + 1];
                arr[b + 1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("\nSorted array is\n");
    for (a = 0; a < num; a++)
        printf("%d ", arr[a]);

    return 0;
}
