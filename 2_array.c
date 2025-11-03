// to print subject marks using array
#include<stdio.h>
void main(){
float SubMarks [5], total=0;
int i;
for (i=1;i<=5;i++){
 printf("Enter Sub %d marks : ",i);
 scanf("%f",&SubMarks[i-1]);
}
for(i=0;i<5;i++){
    total+=SubMarks[i];
    }
    
printf("total=%.2f",total);
}