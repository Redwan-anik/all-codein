#include<stdio.h>
struct std {
 char name[20];
 int id ;
 float marcks;



}std[10];

int main()
{
   int i,sum=0;


   for(i=0;i<10;i++)
   {
printf("enter name,id,marks:");
       scanf("%s %d %f",&std[i].name,&std[i].id,&std[i].marcks);
   }
   printf("name\tid\tmarcks\n");
     for(i=0;i<10;i++)
   {
       printf("%s\t%d\t%f\n",std[i].name,std[i].id,std[i].marcks);
   }
 for(i=0;i<10;i++)
 {
     sum=sum+std[i].marcks;
 }
printf("total marks:%d",sum);

}
