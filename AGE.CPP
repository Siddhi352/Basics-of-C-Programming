#include<stdio.h>
#include<conio.h>
int main ()
{
    int currentyear,birthyear,age;
    clrscr();
    currentyear=2025;
    printf("\n\nPlease enter your birthyear:");
    scanf("%d",&birthyear);
    //Calculate age:
    age=currentyear-birthyear;
    printf("Siddhi age is :");
    printf("%d",age);
    getch();
    return 0;

 }