// Number Guessing Game

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){

    int rand_int,guess; // random integer generation

    srand((unsigned)time(NULL)); // seed once so runs differ

    rand_int=1+rand()%1000; // value in [1-1000]
     
    printf("Try Guessing the Number\n");

    // LOOPING AND LOGIC
     while(guess!=rand_int){
        scanf("%d",&guess);

        if(guess>rand_int){
            printf("Try going Lower\n");
        }
        else if(guess<rand_int){
            printf("Try going Higher\n");
        }
        else{
            printf("YOU GUESSED IT CORRECT!!!!");
        }
    }
         return 0;
}



     

