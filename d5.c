#include<stdio.h>
int main()
{
  int noofrows;
  printf("nu8mber of rows to be printed");
  scanf("%d",&noofrows);
  int row,colspaces,colstar;
  for (row=1;row<=noofrows;row++){
    for(colspaces=noofrows-row;colspaces>=1;colspaces--){
    printf(" ");}
    for (colstar=1;colstar<=row;colstar++){
        printf("* ");
    }


    printf("\n");


  }

}
