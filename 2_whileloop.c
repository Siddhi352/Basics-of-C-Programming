// Using while loop print fibonacci series 0 1 1 2 3 5 8 13 ...
// fib(n)=fib(n-1)+fib(n-2)
 #include<stdio.h>
 int main(){

  int i,j,k,n;
  printf("Enter a number :");
  scanf("%d",&n);

  i=0;
  j=1;
  
  printf("%d %d",i,j);
  k=i+j;
  while(k<=n){
    printf("%d",k);
    i=j;
    j=k;
    k=i+j;
  }

    return 0;
 }