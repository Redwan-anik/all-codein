#include<stdio.h>
int main ()
{
    int i,a,rows,number=1;
    printf("enter your value of rows :");
    scanf("%d",&rows);


    for (i=1;i <= rows;i++)
    {
        for(a=1;a <= i;a+=1)
            {
            printf("%d",number);
             number++;
            }
            printf("\n");
    }


}
