#include<stdio.h>
int main()
{
    int i,a=1,j,k=1,b;
    printf("enter a value for factorial :");
    scanf("%d",&j);

    for (i=j;i>1;i--)
    {
        a=a*i;

    }

    printf("%d",a);


}
