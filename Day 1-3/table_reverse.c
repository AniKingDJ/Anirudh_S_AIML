#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a n: ");
    scanf("%d", &n);

    printf("\n%d:\n", n);
    
    for (i = 10; i >= 1; i--) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
