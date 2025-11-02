#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    printf("Choose:\n1. Binary to Decimal\n2. Decimal to Binary\n");
    scanf("%d", &choice);

    if (choice == 1) {
        int binary, decimal = 0, base = 1, rem;
        printf("Enter binary number: ");
        scanf("%d", &binary);

        while (binary > 0) {
            rem = binary % 10;
            decimal = decimal + rem * base;
            binary = binary / 10;
            base = base * 2;
        }
        printf("Decimal value = %d\n", decimal);
    } 
    else if (choice == 2) {
        int decimal, binary[32], i = 0;
        printf("Enter decimal number: ");
        scanf("%d", &decimal);

        while (decimal > 0) {
            binary[i] = decimal % 2;
            decimal = decimal / 2;
            i++;
        }

        printf("Binary value = ");
        for (i = i - 1; i >= 0; i--)
            printf("%d", binary[i]);
        printf("\n");
    } 
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
