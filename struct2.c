#include<stdio.h>

struct student
{
    char name[20];
    int id;
    float marcks;
}student[3];
int main()
{
   int i;

   for(i=0;i<3;i++)
   {
       printf("enter student name  id  marcks : ");
       scanf("%c %d %f",&student[i].name,&student[i].id,&student[i].marcks);
   }
    printf("name\tid\tmarcks\n");
    for(i=0;i<3;i++)
   {

       printf("%c\t%d\t%f\n",student[i].name,student[i].id,student[i].marcks);
    }

}
