#include<stdio.h>
int main()
{
  int  array[100];
  int i,n;

   printf("enter the size of array :");

    scanf("%d",&n);

    for (i=0;i<=n;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("here the element are :");
    for (i=0;i<=n;i++)
    {
       printf("%d ",array[i]);
    }




}
