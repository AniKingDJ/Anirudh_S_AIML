#include<stdio.h>
int main()
{
    int code,quantity,price,itno;
    int total_price=0;
    char des[100];
    int item_price;
    printf("enter number of items:");
    scanf("%d",&itno);
    for(int i=1;i<=itno;i++)
    {
    printf("item no.%d\n",i);
    printf("Enter the code:");
    scanf("%d",&code);
    printf("Enter the product description:");
    scanf("%s",des);
    printf("Enter the quantity:");
    scanf("%d",&quantity);
    printf("Enter the price:");
    scanf("%d",&price);
    item_price=quantity*price;
    total_price=total_price+item_price;
    printf("item %d total price:%d\n",i,item_price);
    }
    printf("grand total:%d",total_price);

}
