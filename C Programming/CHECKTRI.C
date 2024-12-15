#include<stdio.h>
#include<conio.h>
void main()
{
 int  s1 ,s2,s3;
 clrscr();
 printf("\n Enter three  angles");
 scanf("%d %d %d",&s1,&s2,&s3);
 (s1==s2 && s2==s3 && s1==s3)?printf("\nTringle is equilateral"):(s1!=s2 && s2!=s3 && s1!=s3)?printf("\n Tringle is scalene"):printf("\n Tringle is isoscalen");
 getch();
}