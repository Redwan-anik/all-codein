#include<stdio.h>
int main()
{
    int n,i,even,odd,a;

    printf(" enter size :");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a);

        if(a%2==0)
        {
        printf("even\n");
        }
        else
            { printf("odd\n");}

    }



}
