#include<stdio.h>
#include<conio.h>
void main()
{
 char c;
 clrscr();
 printf("\n Enter a alphabet or digit or special charector");
 scanf("\n %c",&c);
 ( c>='a'&&c<='z')|| (c>='A'&&c<='Z')?printf("%c is Alphabet",c):(c>=48 &&c<=57)?printf("\n %c is Digit",c):printf("\n %c is special charector",c);
 getch();
}