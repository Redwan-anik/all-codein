#include<stdio.h>
int main()
{
    int array[20];
    int i,n,sum=0;

    printf("enter the size of array :");
 scanf("%d",&n);

 printf("enter your element :");
 for (i=0;i<n;i++){
 scanf("%d",&array[i]);

 }
 for (i=0;i<n;i++){
        sum= sum+array[i];
    }

     printf("here the sum of aray :%d",sum);
}
