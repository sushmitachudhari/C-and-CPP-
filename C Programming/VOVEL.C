#include<stdio.h>
#include<conio.h>
void main()
{
  char c;
  clrscr();
  printf("\n Enter a charecter");
  scanf("\n %c ",&c);
  (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')||(c=='AR'||c=='E'||c=='I'||c=='O'||c=='U')?printf("\n %c Charecter is vowel",c):printf("\n %c Charector is consonant",c);
  getch();
}