#include<stdio.h>
int main()
{
   int numb;
   printf("enter your number");
   scanf("%d", &numb);
   if(numb<0)
   {
       printf("negative");
   }
   else if(numb>0)
   {
       printf("positive");
   }
   else {

    printf("equal");
   }
}

