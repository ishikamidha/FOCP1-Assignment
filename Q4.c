#include <stdio.h>

int main() {
    int a = 5, b = 10, temp;

    // Method 1: Using temporary variable
    temp = a;
    a = b;
    b = temp;
    printf("Using temp: a=%d, b=%d\n", a, b);

    // Reset
    a = 5; b = 10;

    // Method 2: Using arithmetic (+ and -)
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Using arithmetic: a=%d, b=%d\n", a, b);

    // Reset
    a = 5; b = 10;

    // Method 3: Using bitwise XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("Using XOR: a=%d, b=%d\n", a, b);

    // Reset
    a = 5; b = 10;

    // Method 4: Using pointers
    int *p1 = &a, *p2 = &b;
    int temp2 = *p1;
    *p1 = *p2;
    *p2 = temp2;
    printf("Using pointers: a=%d, b=%d\n", a, b);

    return 0;
}
