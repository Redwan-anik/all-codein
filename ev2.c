#include<stdio.h>
int main()
{

    int i,n;
    char num[101];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",num);
          if(num[1]%2==0)
        {
        printf("even\n");
        }
        else
            { printf("odd\n");}
    }



}
