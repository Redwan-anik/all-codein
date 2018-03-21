#include<stdio.h>


struct pen
{
    char name[20];
    int id;
    float price;
} pen[3] ;
int main()
{
int i;


    for(i=0; i<3; i++)
    {
        printf("Enter name, id, price: ");
        scanf(" %s %d %f",&pen[i].name,&pen[i].id,&pen[i].price);
    }
    printf("name\tid\tprice\n");
    for(i=0; i<3; i++)
    {
        printf("%s\t%d\t%f\n",pen[i].name,pen[i].id,pen[i].price);
    }

}

