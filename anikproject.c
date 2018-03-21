#include<stdio.h>
#include <conio.h>
#include<string.h>

struct bank{
        char name[100],prof[30],phn[20],pass[20];

        int amt,age;
    }b;
    main(){
        system("color 0a");
    int choice;
    char name;
    printf("\n\n-----------------------Welcome To Online Banking ---------------\n\n");
    printf("1.Registration\n");
     printf("2.login\n");
    printf("3.see Registered member\n");
    printf("4.Search For Registered member\n");
    printf("\nchoose:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        registration();
        break;
    case 2:
        login();
        break;

    case 3:
        viewmember();
        break;
    case 4:
        searchmember();
        break;
    }
}
registration(){
    FILE *file;
    file=fopen("bank.txt", "a+");
    struct bank{
        char name[100],prof[30],phn[20],pass[20];

        int amt,age;
    }t;
     printf("\nWelcome to Registration\n\nplease follow instruction\n ");
      printf("\n");
    printf("enter Name :");
    scanf("%s",&t.name);
    printf("enter age :");
    scanf("%d",&t.age);
      printf("enter amount :");
    scanf("%d",&t.amt);

    printf("enter occupation :");
    scanf("%s",&t.prof);
    printf("enter phone number :");
    scanf("%s",&t.phn);
    printf("enter password :");
    scanf("%s",&t.pass);
    printf("\n Registration done\nthank you\n");

    fwrite(&t,sizeof(t),1,file);
    fclose(file);
}

viewmember(){
    FILE *file;
    file=fopen("bank.txt", "r");
    struct bank{
        char name[100],prof[30],phn[20],pass[20];

        int amt,age;
    }t;
    printf("Name ammount age & occupation,phn,pass :\n");
    while(fread(&t,sizeof(t),1,file))
    {
        printf("%s %d %d %s %s %s\n",t.name,t.amt,t.age,t.prof,t.phn,t.pass);
    }


    fclose(file);
}
searchmember(){
    int choice2;
    printf("Search Registered member\n");
    printf("1.search by name\n");
    printf("2.search  by phn\n");
    printf("3.search  by pass\n");
    scanf("%d",&choice2);
        switch(choice2)
            {
            case 1:
                sname();
                break;
            case 2:
                sphn();
                break;
            case 3:
                //spass();
                break;
    }
}
sname(){
    struct bank t;
    FILE *file;
    file=fopen("bank.txt", "a+");
    char name[100];
    printf("Enter name for search\n");
    scanf("%s",&name);
    while(fread(&t,sizeof(t),1,file))
    {
        if(strcmp(name,t.name)==0)
        {
            printf("%s\t%d\t%d\t%s\t%s\t%s\t\n",t.name,t.amt,t.age,t.prof,t.phn,t.pass);
        }
    }
    if(strcmp(name,t.name)!=0)
    {
        printf("don't have this data\n");
    }
}
sphn(){
    struct bank t;
    FILE *file;
    file=fopen("bank.txt", "a+");
    char phn[100];
    printf("Enter phone number for search\n");
    scanf("%s",&phn);
    while(fread(&t,sizeof(t),1,file))
    {
        if(strcmp(phn,t.phn)==0)
        {
            printf("%s\t%d\t%d\t%s\t%s\t%s\t\n",t.name,t.amt,t.age,t.prof,t.phn,t.pass);
        }
    }
    if(strcmp(phn,t.phn)!=0)
    {
        printf("don't have this data\n");
    }
}
login(){

    struct bank t;
    FILE *file;
    file=fopen("bank.txt", "a+");
    char name[100],phn[20],pass[20];
    printf("Enter  name \n");
    scanf("%s",&name );
     printf("Enter phone number \n");
    scanf("%s",&phn);
    printf("Enter pin code \n");
    scanf("%s",&pass);
    while(fread(&t,sizeof(t),1,file))
    {
            if(strcmp(name,t.name)==0)
        {
            if(strcmp(phn,t.phn)==0)
                {
                    if(strcmp(pass,t.pass)==0)
                {
                    printf("your pin pass ok\n you already login \n thank you\n ");
                  optionInmenu();
                }
                else {printf("your pin is wrong");}
                }
                else {printf("your pin is wrong");}
        }

 if(strcmp(phn,t.phn)!=0)
    {
        printf("your phn number is wrong\n");
    }


}
}

void optionInmenu(){


    int option;
    printf("\n\n ---- Welcome in menu bar ----\n\n");
    printf("\n");
    printf("1.Payment\n\n2.Send Money\n\n3.TopUp\n\n4.in processing\n\n5.in processing\n\n6.in processing\n\n7.in processing\n");
    printf("\n");
    Label:
    printf("Choose your domain:");
    scanf("%d",&option);
    switch(option){



case 1:
    paymentMethod();

    goto Label;

    break;


case 2:
    //sendMoneyMethod();
     goto Label;
    break;


case 3:
    //topUpMethod();
     goto Label;
    break;


case 4:
    //bankAccountMethod();
     goto Label;
    break;
case 5:
    //remitanceMethod();
     goto Label;
    break;

case 6:
    //cashOutMethod();
     goto Label;
    break;

case 7:
    //logOutMethod();
     goto Label;
    break;

default:
    printf("Try again!!!OPPS\n");

    }


}

paymentMethod(){

{

    struct bank t;
    FILE *file;
    file=fopen("bank.txt", "a+");
    char name[100],phn[20],pass[20];
    int cost;
    printf("Enter  name \n");
    scanf("%s",&name );
     printf("Enter phone number \n");
    scanf("%s",&phn);
    printf("Enter pin code \n");
    scanf("%s",&pass);
    while(fread(&t,sizeof(t),1,file))
    {
            if(strcmp(name,t.name)==0)
        {
            if(strcmp(phn,t.phn)==0)
                {
                    if(strcmp(pass,t.pass)==0)
                {
                    printf("welcome in payment system");
                     printf("inprocessing");

                }
                else {printf("your pin is wrong");}
                }
                else {printf("your pin is wrong");}
        }

 if(strcmp(phn,t.phn)!=0)
    {
        printf("your phn number is wrong\n");
    }


}
}












}







