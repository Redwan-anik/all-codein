#include<stdio.h>
int main()
{
    int i,a,d,j,k=1,l;
    printf("enter a value for factorial :");
    scanf("%d",&j);
     l=1;
    for (i=j;i>1;i--)
    {     a=1;
         for(k=i;k>1;k--){

        a=a*k;}
        d=a/i;
        l=l+d;

    }

    printf("%d",l);

}
