// Create an array with size accepted from user at runtime, auto fill the elements 10,20,30..
// Display from right to left
#include<stdio.h>
void main()
{
    int size ,i;
    printf("Enter size for array(no. of elements):- ");
    scanf("%d",&size);
    int nos[size]; // i to transfer the array

    //fill the elements with no 10,20,30..
    for(i=0;i<size;i++)
    nos[i]=(i+1)*10;
    printf("Elements of nos[]from R to L are\n");
    for(i=size-1;i>=0;i--)
    printf("%d",nos[i]);//50,40,30,20,10
} 