#include<stdio.h>
int main ()
{
    int a,b,i,k,y;
    scanf("%d",&a);
    for(i=1;i<11;i++){
            printf("to continue enter 1 0r press any key:");
       scanf("%d",&y)  ;
       k=a*i;
       if(y==1){


       printf(" %d * %d = %d\n",a,i,k);}
    }
}
