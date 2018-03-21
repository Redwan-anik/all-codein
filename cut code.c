printf("Here you can pay ellectric bill");
printf("\nenter phn no:");
scanf("%d",&phn);
printf("enter holding no :");
scanf("%d",&holding);
printf("enter bill  no :");
scanf("%d",&bill);
printf("enter amount :");

scanf("%d",&amount);
total=total-amount;
if (amount>total)
{
    printf("\ninsufficient balance. \nThank You\n");
}
else {printf("\n\npay successful!!\n");
printf("\n\ncurrent balance:%f",total);
}
printf("\nfor  menu press 0\n");
         printf("\nenter number :",b);
       scanf("%d",&b);
       if (b==0)
       {
        goto here;
       }
        else
       {
           printf("invalid keyword");
       }
