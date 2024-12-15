#include<stdio.h>
#include<conio.h>
void main()
{
 int a;
 char ch;
 float f;
 double d;
 long int b;
 long double s;
  clrscr();
   printf("Enter a number:");
   scanf("%d",&a);

   printf("\nEnter a char:");
   flushall();
   scanf("%c",&ch);

   printf("\nEnter a float value:");
   scanf("%f",&f);

   printf("\nEnter a double value:");
   scanf("%lf",&d);

   printf("\nEnter a Long Integer value:");
   scanf("%ld",&b);

   printf("\nEnter a long double value:");
   scanf("%Ld",&s);

   printf("\na : %d ",a);

   printf("\nch :%c ",ch);

   printf("\nf :%f ",f);

   printf("\nd :%lf ",d);

   printf("\nb :%ld ",b);

   printf("\ns :%Ld ",s);

   getch();
}


