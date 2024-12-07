//write a c program to print n to 1
#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}

