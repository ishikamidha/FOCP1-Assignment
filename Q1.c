#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Count digits
    int temp = num;
    while(temp != 0) {
        temp /= 10;
        n++;
    }

    // Calculate sum of powers
    temp = num;
    while(temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    // Check
    if(result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
