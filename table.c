// Accept any number from user and display its table.
#include<stdio.h>
void main(){
    int no,i;
    printf("Enter the no of which table reqd :- ");
    scanf("%d",&no);
    printf("Table of no %d is \n",no);
    for(i=1;i<=10;i++)
    printf("%d*%d=%d\n",no,i,no*i);

}