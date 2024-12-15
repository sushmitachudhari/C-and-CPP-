
#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j;
 clrscr();
  for(i=1;i<=3;i++)
  {
   for(j=1;j<=5;j++)
   {
     if(j>=i && j<3+i && i==2 )
     {  printf("\t ");
     }
     else
      printf("\t*");
   }
   printf("\n");
  }

 getch();
}