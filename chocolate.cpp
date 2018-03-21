#include<stdio.h>
int main ()
{
   int s[100],i,n;
   printf("Enter the number of packets :");
   scanf("%d",&n);
   printf("Enter number of chocolates :");
   for(i=0;i<n;i++){
   scanf("%d",&s[i]);}
   for(i=0;i<n;i++){
    printf("%d\t",s[i]+2);
   }
   }
