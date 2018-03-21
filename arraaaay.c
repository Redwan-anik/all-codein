#include<stdio.h>
int main()
{
   int a[10],b,n,i;
   printf("enter size :");
   scanf("%d",&n);
   printf("element:");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);

   }
     printf("element:");
   for(i=0;i<n;i++)
   {
       printf("%d ",a[i]);

   }
    printf("location :");
     scanf("%d",&b);

     printf("%d",a[b-1]);






}
