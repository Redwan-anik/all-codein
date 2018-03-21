#include<stdio.h>
int main ()
{
    int i,a,rows,b;
    printf("enter your value of rows :");
    scanf("%d",&rows);


    for (i=1;i <= rows;i++)
    {

        for(a=rows-i;a >= 1;a--)
            {

             printf(" ");
            }

            /* Print star */
        for(b=1; b<=i; b++)
        {
            printf("* ");
    }

    printf("\n");
}

}
