#include<stdio.h>
#include<conio.h>
void main()
{
 int a1,a2,a3;
 clrscr();
 printf("\n Enter angles of tringle");
 scanf("%d %d %d",&a1,&a2,&a3);
 if( a1==a2 && a2==a3 && a1==a3 )
  { printf("\n Equilateral Tringle"); }
 else if(a1!=a2 && a2!=a3 && a3!=a1)
   {
     printf("\n scalene Triangle");
   }
 else
   {
    printf("\n isoscale Tringle is ");
   }
  getch();
}


