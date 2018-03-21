#include<stdio.h>
int main()
{

 int a=20,b=30,c=31,d;
 d=(++a)-(--b)+(c++)+(a--);
printf("%d",d);
}
