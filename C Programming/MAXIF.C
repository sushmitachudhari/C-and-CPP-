#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 clrscr();
 printf("Enter two numbers");
 scanf("%d %d",&a,&b);
 if(a>b)
    printf("\n %d is Greater",a);
 if(a<b)
    printf("\n %d is Greater",b);

  getch();
}
