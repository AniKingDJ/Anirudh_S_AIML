//c program to print the count of even and odd present 1 to n
#include <stdio.h>

int main() {
    int n, evenCount = 0, oddCount = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Count of even numbers %d: %d\n", n, evenCount);
    printf("Count of odd numbers %d: %d\n", n, oddCount);

    return 0;
}
