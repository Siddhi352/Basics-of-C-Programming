#include<stdio.h>
#include<conio.h>
 int main(){
    //Step1 Declare
    float sub1,sub2,sub3,sub4,sub5,AchievedMarks,TotalMarks,Percentage;
    //Step2 Initialize
    TotalMarks = 500.0;
    clrscr();
    //Step 3 Input marks
    printf("/nEnter Subject 1 marks:");
    scanf("%f",&sub1);
    printf("/nEnter Subject 2 marks:");
    scanf("%f",&sub2);
    printf("/nEnter Subject 3 marks:");
    scanf("%f",&sub3);
    printf("/nEnter Subject 4 marks:");
    scanf("%f",&sub4);
    printf("/nEnter Subject 5 marks:");
    scanf("%f",&sub5);

    //Step4 Calculate AchievedMarks,Percentage
    AchievedMarks=sub1+sub2+sub3+sub4+sub5;
    Percentage=(AchievedMarks/TotalMarks)*100;
    printf("Percentage %.2f",Percentage);

    //Find Failed Student
    if(sub1<40||sub2<40||sub3<40||sub4<40||sub5<40){

    printf("Result=Fail");
   }
   else{
    if(Percentage>=75){
    printf("Result=Distinction");}
    else if(Percentage<75&& Percentage>=60){
    printf("Result=Grade A");}
    else if(Percentage<60&& Percentage>=50){
    printf("Result=Grade B");}
    else{
    printf("Result=Grade C");}
    }

   getch();
   }
