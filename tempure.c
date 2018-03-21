#include<stdio.h>

int main()
{
    double celsius,farenheit;

    printf("Enter the temperature in Celsius:");
    scanf("%lf",&celsius);

    farenheit=((celsius*(9.0/5.0))+32);
    printf("%lf\n",farenheit);

    return 0;
}
