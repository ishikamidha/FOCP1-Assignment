#include <stdio.h>
int main() {
    int arr[100], n, count = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++)
        if (arr[i] == 99) {
            printf("Student %d scored 99\n", i + 1);
            count++;
        }
    printf("Total students scored 99: %d", count);
    return 0;
}
