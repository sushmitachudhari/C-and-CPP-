#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 float s,area;
 clrscr();
 printf("\nEnter side of equilateral tringle: ");
 scanf("%f ",&s);
 area=(sqrt(3)/4)*s*s;
 printf("\nArea of Equilateral triangle ia %f",area);
 getch();
}