#include<stdio.h>
int main()
{

    int t,i,num,j ;
    scanf("%d",&t);
    for(i=1;i<t;i++)
    {
        scanf("%d",&num);
        printf("case %d: ",i);
        for(j=1;j<=num;j++)
        {
            if(num%j==0)
            {
                printf(" %d",j);

            }
        }
        printf("\n");
    }







}
