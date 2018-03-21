#include<stdio.h>
int add(int,int);
main()
{
   int x=3,y=4,c;
    c=add(x,y);
    printf("%d",c);

}
int add(int a,int b)
{
    int c=a+b;
    return c;
}
