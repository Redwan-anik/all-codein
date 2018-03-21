#include<stdio.h>
int main()
{
   int i,n,sum=0;
   printf("give your limit :");
   scanf("%d",&n);
   for(i=1;i<=n;i+=2)
   {
       sum+=i;

   }
  printf("Sum of all even number between 1 to %d = %d", n, sum);





}
