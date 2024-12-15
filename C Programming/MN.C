#include<stdio.h>
#include<conio.h>
int main()
{
 int x,y;
 
 printf("\n Enter value of x and y");
 scanf("\n %d %d",&x,&y);
 x>=0 && y>=0?printf("\n First Quadrant "):x>=0 &&y<=0 ?printf("\n Second Quadrant")
 :x<=0 && y<=0?printf("\n Third Quadrant"):printf("\n Fourth Quadrant");
 return 0;
}
