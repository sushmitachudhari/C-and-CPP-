#include<stdio.h>
#include<conio.h>
void main()
{
 char ch;
 clrscr();
 printf("\n Enter a charector");
 scanf("%c",&ch);
 if(ch>=65 || ch<=90 ||ch>=97 ||ch<=122)
 {
  printf("\n %c is Alphabet",ch);
 }
 else
   printf("\n %c is not Alphabet",ch);

 getch();

}