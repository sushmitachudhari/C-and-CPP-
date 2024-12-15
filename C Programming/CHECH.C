#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;
  clrscr();
  printf("\n Enter a charector");
  scanf("%c",&ch);
  if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
   {
     printf("\n %c is Alphabet",ch);
   }
   else if(ch>='0' && ch<='9')
   {
    printf("\n %c is Digit",ch);
   }
   else
    printf("\n %c is Special Symbol",ch);

   getch();
}