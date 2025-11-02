#include <stdio.h>
int main() {
    int arr[100], n, i;
    printf("Enter array size: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++) {
        if (arr[i] == 99) {
            printf("First occurrence at index %d", i);
            return 0;
        }
    }
    printf("99 not found");
    return 0;
}
