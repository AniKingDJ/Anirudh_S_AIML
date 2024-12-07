#include <stdio.h>

int main() {
    int amount;
    int notes_2000, notes_500, notes_200, notes_100, notes_50, notes_20, notes_10, notes_5, notes_2, notes_1;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    notes_2000 = amount / 2000;
    amount %= 2000;

    notes_500 = amount / 500;
    amount %= 500;

    notes_200 = amount / 200;
    amount %= 200;

    notes_100 = amount / 100;
    amount %= 100;

    notes_50 = amount / 50;
    amount %= 50;

    notes_20 = amount / 20;
    amount %= 20;

    notes_10 = amount / 10;
    amount %= 10;

    notes_5 = amount / 5;
    amount %= 5;

    notes_2 = amount / 2;
    amount %= 2;

    notes_1 = amount;

    printf("Number of notes/coins required:\n");
    if (notes_2000) printf("₹2000--------------> %d\n", notes_2000);
    if (notes_500) printf("₹500--------------> %d\n", notes_500);
    if (notes_200) printf("₹200--------------> %d\n", notes_200);
    if (notes_100) printf("₹100--------------> %d\n", notes_100);
    if (notes_50) printf("₹50--------------> %d\n", notes_50);
    if (notes_20) printf("₹20--------------> %d\n", notes_20);
    if (notes_10) printf("₹10--------------> %d\n", notes_10);
    if (notes_5) printf("₹5--------------> %d\n", notes_5);
    if (notes_2) printf("₹2--------------> %d\n", notes_2);
    if (notes_1) printf("₹1--------------> %d\n", notes_1);

    return 0;
}
