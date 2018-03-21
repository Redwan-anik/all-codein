#include<stdio.h>
int main()
{
    int i,n,j;
    printf("enter number :");
    scanf("%d",&n);
    j=0;
    while(n!=0)
    {
        n=n/10;
        j++;
    }

    printf("%d",j);




}
