#include<stdio.h>
int main()
{

    int a[20] ,i,neg=0,n;

    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter  element:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for (i=0;i<n;i++){

    if(a[i]<0){
            neg++;

    }



    }

    printf(" negetive numbers total %d ",neg);



}
