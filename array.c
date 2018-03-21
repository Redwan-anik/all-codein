#include<stdio.h>
int main()
{
   int a[20] ,i,j,n,even,odd;

    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter  element:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }

    even=0;
    odd=0;
    for(i=0;i<n;i++){


        if(a[i]%2 == 0){
            even++;
        }
        else
        {odd++;}


    }

 printf("Total even elements: %d\n", even);
    printf("Total odd elements: %d", odd);




}
