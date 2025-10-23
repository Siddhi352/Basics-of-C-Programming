 //CALCULATOR
 #include<stdio.h>
 int main(){
 float op,operand1,operand2,ans;
 printf("Enter number 1:\n");
 scanf("%f",&operand1);

 printf("Enter 1 to add,2 to subtract,3 to multiply,4 to divide\n");
 scanf("%f",&op);

 printf("Enter number 2:\n");
 scanf("%f",&operand2);

 if(op==1){
 ans=operand1+operand2;
 printf("Answer:%.2f",ans);
 }
 else if(op==2){
 ans=operand1-operand2;
 printf("Answer:%.2f",ans);
 }
 else if(op==3){
 ans=operand1*operand2;
 printf("Answer:%.2f",ans);
 }
 else if (op==4){
 ans=operand1/operand2;
 printf("Answer:%.2f",ans);
 }

 else{
 printf("Invalid operator");
 }
  return 0;
  }