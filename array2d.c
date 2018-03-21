#include<stdio.h>
int main()
{
    int a[4][3];
    int i,j,n,sum=0;

    printf("enter value :");
    for (i=0;i<4;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
            sum=sum+a[i][j];
        }
    }


    printf("%d\n",sum);

printf("position :");
 for (i=0;i<4;i++)
    {
        for (j=0;j<3;j++)
        {printf("\n[%d,%d] position value is %d",i,j,a[i][j]);}


    }

}
