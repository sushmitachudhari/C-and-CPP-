#include<stdio.h>
//#include<conio.h>
int main()
{
  int y;
  //clrscr();
  printf("\n Enter a year");
  scanf("%d",&y);
   if(y%4==0)
   {
   	 printf("\nYear is leap");
   }
   else{
   	   printf("\nYear is not leap");
   }
   return 0;
  //getch();

}
