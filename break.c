#include<stdio.h>
int main()
{
  int a;
  double number,sum=0.0;



for (a=1;a<=10;++a)

{


     printf("enter your number:");
  scanf("%lf",&number);

  if (number<0.00)
  {
      continue;
  }
    sum+=number
    ;



}





  printf("sum =%.21lf",sum);




}
