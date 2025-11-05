#include<stdio.h>
#include<conio.h>
int main(){
    int num,i,j,prime;
    clrscr();
    printf("Enter a number :");
    scanf("%d", &num);

    for(i=2;i<num;i++)
    {
        if(i<=2){
            continue;
        }
        prime=1;
        for(j=2;j*j<=i;j++){
            if(i%j==0)
            {
                prime=0;
                break;
            }
        
        }
        if (prime==1){
            printf("%d",i);
        }

    }
    printf("\n");
    getch();
    return 0;
}