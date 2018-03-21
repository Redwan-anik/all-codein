#include<stdio.h>
int main()
{

    int a[20] ,i,n,value;

     printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter  element:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
 printf("elements are:");

    for (i=0;i<n;i++)
    {
        printf("%d  ",a[i]);

    }
    printf("give value:");
    scanf("%d",&value);
       for (i=0;i<n;i++)
       {
           if(a[i]==value){ printf("position %d",i+1);}

       }




}
