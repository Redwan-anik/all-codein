#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter your number for a :");
    scanf("%d",&a);
    printf("\nenter your number for b :");
    scanf("%d",&b);
    printf("\nenter your number for c :");
    scanf("%d",&c);

    if (a>b && a>c)
    {
        printf(" a is greater");

    }
    else if(b>a && b>c)
    {
        printf("b is greater");

    }

    else {printf(" \n\nc is greater\n\n");
    }







}
