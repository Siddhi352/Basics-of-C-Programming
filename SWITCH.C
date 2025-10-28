 #include<stdio.h>
 #include<conio.h>
 int main(){

   int daynumber;
   clrscr();
   printf("Enter day number :");
   scanf("%d",&daynumber);

   switch(daynumber){
    case 1:
	 printf("Breakfast = Pohe\n");
	 break;
    case 2:
	 printf("Breakfast = Idli\n");
	 break;
    case 3:
	 printf("Breakfast = Dosa\n");
	 break;
    case 4:
	 printf("Breakfast = Paratha\n");
	 break;
    case 5:
	 printf("Breakfast = Omelette\n");
	 break;
    case 6:
	 printf("Breakfast = Misal Pav\n");
	 break;
    case 7:
	 printf("Breakfast = Pizza\n");
	 break;
    default:
	 printf("Invalid Day number!");
	 break;
   }
   getch();
   return 0;
   }