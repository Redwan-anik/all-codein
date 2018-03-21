#include<stdio.h>
int main()
{

 int a=20,b=39,c=42,d;
 d=(--a)+(++b)+(++c)-(--b)-(--a)+(++c)-(--a)+(a--)-(b++)-(c--);
printf("%d",d);
}

