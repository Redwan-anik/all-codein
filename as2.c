#include<stdio.h>
int main ()
{


   int i,consonant=0,vowel=0;
    char fp[]="Daffodil university has been founded by Daffodil Group with the approval of the Ministry of Education under the Private University Act of 1992 and its amendment in 1998 and Daffodil International University came into being on 24th January 2002, the University today combines impressive modern facilities and a dynamic approach to teaching and research with its proud heritage of service and achievement.";
    strlwr(fp);

    for(i=0; i<strlen(fp); i++)
    {
 if(fp[i]=='a' || fp[i]=='e' || fp[i]=='i' || fp[i]=='o' || fp[i]=='u')
        {
vowel++;
        }
        else
        {
consonant++;
        }
    }

    printf("vowel :%d",vowel);
    printf(" consonant :%d",consonant);



}

