#include<stdio.h>
int main(){



int up, down,n,devide,sum=1,b;
float ans=1.00;
printf("value :");
scanf("%d",&n);
for (up=n;up>=1;up--)
{

      b=1;
for (down=n;down>=1;down--)
    {

     b=b*down;

}
devide=up/b;
ans=ans+devide;


}



printf("%f",ans);














}

