#include <stdio.h>
int main()
{ 
    int Age;
    printf("enter the Age :");
    scanf("%d",&Age);
    if(Age>=18)
    {
        printf("Eligible to vote");
       }
       else
       {
           printf("not eligible to vote");
       }
}
