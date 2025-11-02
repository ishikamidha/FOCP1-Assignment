#include <stdio.h>

int main() {
    int a, b, result;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    result = a + (~b + 1); // a - b using bitwise operations

    printf("Result of subtraction = %d\n", result);
    return 0;
}
