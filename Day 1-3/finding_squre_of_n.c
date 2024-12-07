#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Square values from 1 to %d:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d\n", i * i);
    }

}
