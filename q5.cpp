#include<stdio.h>
int main ()
{
    int s[100],n,i,c,p,j,k=0;
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("enter element :");
    for(i=0;i<n;i++){
        scanf("%d",&s[i]);}
        p=0;

    for(i=0;i<n;i++){

            c=0;
    for(j=2;j<s[i];j++){
            if(s[i]%j==0){
                c++;}
                }
    if(c==0)
    p++;}
    for(i=0;i<n;i++)
        {
    if(s[i]==1)
    k=p-1;


}
       if(k!=0){
        printf("%d",k);
       }
     else { printf("%d",p);}
}
