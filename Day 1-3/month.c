#include <stdio.h>
int main()
{
    int month;
    printf("Enter a month");
    scanf("%d",&month);
    if(month>=1 && month<=12)

    printf("it is vaild month");
    else
    {
        printf("it is not vaild month");
    }
}