#include<stdio.h>
int main ()
{
    printf("welcome in gp r taka mara  system");
     printf("\n-------------------------------------");

     printf("\n1.balance\n2.internet pack\n3.talktime\n4.my offer\n5.other service\n");
   int a,b;
   up:
    printf("\nselect number from the list:");
   scanf("%d",&a);
   switch (a){

       case 1: printf("\nhere is your balance 500\nthanku\n");
       printf("\nfor main menu press 0");
       printf("\nener number :",b);
       scanf("%d",&b);
       if (b==0)
       {
         goto up;
       }
       else
       {
           printf("invalid keyword");
       }
       break;

       case 2: printf("\nyour running pack is 4mb pack\nthanku\n");
        printf("\nfor main menu press 0");
        printf("\nener number :",b);
       scanf("%d",&b);
       if (b==0)
       {
         goto up;
       }
        else
       {
           printf("invalid keyword");
       }

       break;
        case 3: printf("\nyou have no talktime\nthanku\n");
         printf("\nfor main menu press 0");
         printf("\nener number :",b);
       scanf("%d",&b);
       if (b==0)
       {
         goto up;
       }
        else
       {
           printf("invalid keyword");
       }

       break;
        case 4: printf("\nyou are in gp star\nthanku\n");
         printf("\nfor main menu press 0");
         printf("\nener number :",b);
       scanf("%d",&b);
       if (b==0)
       {
         goto up;
       }
        else
       {
           printf("invalid keyword");
       }

       break;
        case 5: printf("\nfor other service go in gp center\n");
         printf("\nfor main menu press 0\n");
         printf("\nener number :",b);
       scanf("%d",&b);
       if (b==0)
       {
         goto up;
       }
        else
       {
           printf("invalid keyword");
       }

       break;

       default: printf("\ninvalid");


   }



}
