#include<stdio.h>
#include<conio.h>
int main()
{
 int xx,yy;
 //clrscr();
 printf("\n Enter the two  values of guards " );
 scanf("%d %d",&xx,&yy);

 xx>=yy?printf("\n%d %d\t YES",xx,yy):printf("\n%d %d\tNO",xx,yy);
 return 0;
 //getch();
}
