#include<stdio.h>
int main()
{
    long a,b,c;
    printf("enter your number for a :");
    scanf("%ld",&a);
    printf("\nenter your number for b :");
    scanf("%ld",&b);
    printf("\nenter your number for c :");
    scanf("%ld",&c);

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

