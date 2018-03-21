#include<stdio.h>
int main()
{
    float up, down,sum,devide;
    int n;
    printf("enter value: ");
    scanf("%d",&n);
    sum=0;
    for(down=1;down<=n;down++){
        devide=1/down;
        sum=sum+devide;


    }



    printf("%f",sum);











}
