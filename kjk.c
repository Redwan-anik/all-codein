#include<stdio.h>
int main ()
{
    int x,i,c,f,l,r,s;
    printf("Enter a Number :");
    scanf("%d",&x);
    c=0;
    f=0;
    for(i=x;i>0;){
        l=i%10;
        i=i/10;
        c++;
        f=f*10+l*10;
        if(c==1){
            r=l;
        }
        else if(i<10){
            s=l;
        }


    }
    printf("\n%d\n",f/10);
}
