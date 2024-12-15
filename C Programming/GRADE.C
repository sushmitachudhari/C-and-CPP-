#include<stdio.h>
#include<conio.h>
void main()
{
 char c;
 clrscr();
 printf("\n Enter the grade between E V G A F");
 scanf("\n %c",&c);
 c=='E'?printf("\n Exellent"):c=='v'?printf("\n very GOOD"):c=='G'?printf("\n GOOD"):c=='A'?printf("\n Average"):c=='f'?printf("\n Fail"):printf("\n No");
 getch();
}