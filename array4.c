#include<stdio.h>
int main()
{
  int array[100];
  int i,n, max, min;
  printf("enter the size of array :");

  scanf("%d",&n);
  printf("enter the element:");
  for(i=0;i<=n;i++)
  {
      scanf("%d",&array[i]);

  }


      printf("here the element are :");
    for (i=0;i<=n;i++)
    {
       printf("%d ",array[i]);
    }
    max=array[0];
    min=array[0];

    for(i=1;i<=n;i++){
       if(array[i]>max) {max=array[i];}
        if(array[i]<min){min=array[i];}

    }
    printf("max element :%d\n",max);
    printf("min element:%d",min);
}
