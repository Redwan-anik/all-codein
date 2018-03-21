account(){
    FILE *file;
    file=fopen("bkashproject.txt", "a+");
    struct acc_create {
        char fname[30],lname[30],gender[10],pnum[13],nid[15],pin[10],again[10],acc[10];
        int submit;
    }a;

          printf("Enter your first name\n");
              //fflush(stdin);
              //gets(a.fname);
              scanf("%s",&a.fname);
              fprintf(file,"%s\n",a.fname);
          printf("Enter your last name\n");
              scanf("%s",&a.lname);
              fprintf(file,"%s\n",a.lname);
          printf("Enter your gender\n");
              scanf("%s",&a.gender);
              fprintf(file,"%s\n",a.gender);
          printf("Enter your NID number\n");
              scanf("%s",&a.nid);
              fprintf(file,"%s\n",a.nid);
          printf("Enter your Phone number\n");
            scanf("%s",&a.pnum);
            fprintf(file,"%s\n",a.pnum);
