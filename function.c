#include<stdio.h>
int odd(int x)
{

 if(x%2==0)
return 0;
else if(x%2!=1)
return 1;


}
int main()
{

    int y,a;
    scanf("%d",&a);
    if (odd(a))
    {
        printf("odd");
    }

    else {printf("even");}


}
