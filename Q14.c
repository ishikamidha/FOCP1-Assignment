#include <stdio.h>
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main() {
    int arr[100], n, count = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++)
        if (isPrime(arr[i]))
            count++;
    printf("Total prime numbers = %d", count);
    return 0;
}
