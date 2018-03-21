#include<stdio.h>

struct student
{
    char id[20];
    char name[20];
    int age;
}s;
main()
{
    add();
    show();
    search();
}
add()
{
    struct student s;
    FILE *fp;
    fp=fopen("Student.txt", "a");
    printf("Enter Student ID: ");
    scanf("%s", s.id);
    printf("Enter Student Name: ");
    scanf("%s", s.name);
    printf("Enter Student Age: ");
    scanf("%d", &s.age);

    fwrite(&s,sizeof(s),1,fp);
    fclose(fp);
}
show()
{
    FILE *fp;
    fp=fopen("Student.txt","r");
    printf("ID\t\tName\tAge\n");
    while(fread(&s,sizeof(s),1,fp))
    {

        printf("%s\t%s\t%d\n",s.id,s.name,s.age);
    }
}

   search()
   {
       char search[20];
       FILE *fp;

       fp=fopen("student.txt","r");
       scanf("%s",&search);
       while(fread(&s,sizeof(s),1,fp))
    {
       if(strcmp(search,s.id)==0)
       {
           printf("%s\t%s\t%d\n",s.id,s.name,s.age);
       }
       else
        {printf("id not match");}
    }




   }
    fclose(fp);
