#include<stdio.h>
int main()
{
    int code,quantity,price;
    char des;
    int total_price;
    printf("Enter the 1 code:");
    scanf("%d",&code);
    printf("Enter the product description:");
    scanf("%s",&des);
    printf("Enter the quantity:");
    scanf("%d",&quantity);
    printf("Enter the price:");
    scanf("%d",&price);
    total_price=quantity*price;
    printf("-------------------------------\n");
    printf("net total=%d",total_price);

}
