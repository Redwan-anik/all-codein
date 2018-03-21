#include<stdio.h>
int main()
{

  int a;

  char operator;
  double firstnumber, secondnumber;



  printf("\nenter your operator (+,-.*,/,%):");
  scanf("%c",&operator);

   for (a=0;a<=10;a++)
  {


  printf("\nenter your first number :");
  scanf("%lf",&firstnumber);

  printf("\nenter your second number :");
  scanf("%lf",&secondnumber);



  switch(operator)
  {
  case'+':
      printf("%lf+%lf=%lf",firstnumber,secondnumber,firstnumber+secondnumber);
    break;

  case'-':
    printf("%lf-%lf=%lf",firstnumber,secondnumber,firstnumber-secondnumber);
    break;

    case'*':
    printf("%lf*%lf=%lf",firstnumber,secondnumber,firstnumber*secondnumber);
    break;

    case'/':
    printf("%lf/%lf=%lf",firstnumber,secondnumber,firstnumber/secondnumber);
    break;



     default :
        printf("error");


  }


  }


}





















