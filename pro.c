#include<stdio.h>
#include<string.h>
#include <conio.h>
#include<stdlib.h>

int payment()
{
    int a;
    printf("\n1. Mobile recharge\n2. Electricity bill\n3. Send money\n4. Check balance\n5. Cash in\n6. Cash out\nchoose a option: ");
    scanf("%d",&a);

}
////////////////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////
struct user
{
    char email[50];
    char name[15];
    char pass[15];
    int unumber[15];
    char phone[10];
    int unumber1[15];
    char name1[15];
    char pass1[15];
};
/////////////////////////////////////////////////////////
int login()
{
    struct user user;
    int i=0,code,ctr;
    FILE *ptr;

    printf("|-----------Log in---------------|\n");

    do
    {
        printf("\nEnter your code number: ");
        scanf("%d",&user.unumber1);
        printf("\nEnter username: ");
        scanf("%s",&user.name1);
        printf("\nEnter password: ");
        scanf("%s",user.pass1);


        ptr=fopen("user.txt","r");
        while(!feof(ptr))
        {
            fscanf(ptr,"%d\t%s\t%s\t%s\t%s\n",user.unumber,user.name,user.email,user.phone,user.pass );

        }
        fclose(ptr);

        if(strcmp(user.name,user.name1)==0)
        {
            printf("Found %s",user.email);
            i=1;
        }
        else
        {
            printf("Wrong username or password...Try again");
 i=0;
        };


        fclose(ptr);

    }
    while(i==0);
    if(i==1)
    {
        //system("clr");

        payment();
    }
}
/////////////////////////////////////////////////////////
int signup()
{

    struct user user;
    char fcode,ch,code;
    int i,c,d,ctr=1,s,x=0;
    FILE *ptr;

    ptr=fopen("user_info.txt","r");
    while ((d = fgetc(ptr)) != EOF)
    {
        if (d == '\n')
            ctr++;
    }
    fclose(ptr);

    printf("\n\t\t\tSign Up\n");


    do
    {
        printf("Enter %d as your unique number\nEnter your unique number: ",ctr);
        scanf("%d", &s);
        if(ctr==s)
        {


            ptr=fopen("user.txt","a");
            printf("\nChoose a username: ");
            scanf("%s", &user.name);
            printf("\nnEnter email: ");
            scanf("%s",&user.email);
            printf("Enter phone no:+880 ");
            scanf("%s",&user.phone);
            printf("Crate password: ");
            scanf("%s",&user.pass);
            fwrite(&user,sizeof(user),1,ptr);
            fclose(ptr);

            printf("\n");
            ptr=fopen("user_info.txt","a");
            fprintf(ptr,"%d\t%s\t%s\t%s\t%s\n",s,user.name,user.email,user.phone,user.pass );

            fclose(ptr);
            printf("\n\n\t\t\tSignup Successful\n\n\n\n");
            //system("CLS");
            printf("\t\t\tLog in Page.\n");
            fclose(ptr);

            x=1;

        }
        else

        {
            printf("Wrong serial number....Try again\n ");
            x=0;
        }


    }
    while(x==0);
}

/////////////////////////////////////////////////////////
int options()
{
    int option;


    printf("\n1.Admin Panel\n2.Sign up(User)\n3.Login(user)\nChoose your option: ");
    scanf("%d",&option);
    switch(option)
    {
    case 1:
        break;
/////////////////////////////////////////////////////////
    case 2:
        signup();
        break;
/////////////////////////////////////////////////////////
    case 3:
        login();
    }
}
/////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////

int main()
{
    int x;

    options();
    if(x==1)
    {
        options();
    }


}


