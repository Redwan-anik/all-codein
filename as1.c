#include<string.h>
int main ()
{
    char fathername[100], mothername[100], me[100];
    int total;


    printf("Enter my father name: ");
    gets(fathername);

    printf("Enter my mother name: ");
    gets(mothername);

    printf("Enter me: ");
    gets(me);

    strcat(me,fathername);
    strcat(me,mothername);
    total=strlen(me);

    printf("total length:%d",total);


}

