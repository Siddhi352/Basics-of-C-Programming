#include<stdio.h>
int main()
{
  int num1,num2,temp;

  //Prompt the user to enter the two numbers
  printf("Enter two integers");
  scanf("%d%d",&num1,&num2);

  //Display the numbers before swapping
  printf("Before swapping:\n");
  printf("num1=%d\n",num1);
  printf("num2=%d\n",num2);

  //swapping logic using a temporary variable
  temp=num1;//store the value of num1 in temp
  num1=num2;//assign the value of num2 to num1
  num2=temp;//assign the value stored in temp(original num1)to num2

  //display the number after swapping
  printf("\nAfter swapping:\n");
  printf("num1=%d\n",num1);
  printf("num2=%d\n",num2);

  return 0;//indicate successful program execution

  }