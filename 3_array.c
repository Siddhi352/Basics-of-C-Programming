// To print result of student using array.
#include<stdio.h>
int main()
{
    float marks[5],
    total=0,percentage;
    int i;
    for(int i=1;i<=5;i++){
        printf("Enter subject %d : ",i);
        scanf("%f",&marks[i-1]);
    }
    for(int i=0;i<5;i++){
        total+=marks[i];
    }
    percentage=(total/500)*100;
    if(percentage>75){
        printf("Result = Distinction");
    }
    else
    if(percentage<=75 && percentage>=60){
        printf("Result = First Grade");

    }
    else
    if(percentage<60 && percentage>=50){
        printf("Result = Second Grade");
    }
    else
    if(percentage<50 && percentage>=40){
        printf("Result = Third Grade");
    } 
    else{
        printf("Result = Fail");
    }
    return 0;
}