#include<stdio.h>
#include<conio.h>
void main()
{
 char ch;
 clrscr();
 printf("\n Enter a charetor");
 scanf("%c",&ch);
 if(ch>=65 &&ch<=90)
 {
  printf("%c is Uppercase charector",ch);
 }
 if(ch>=97 && ch<=122)
   printf("%c  is Lowercase Charector",ch);

 getch();
}
