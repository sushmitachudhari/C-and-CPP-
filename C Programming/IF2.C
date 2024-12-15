#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b,c;
 //clrscr();
 printf("\n Enter Three Numbers");
 scanf("%d %d %d",&a,&b,&c);
 if(a>b && a>c)
 {
   printf("%d is Max",a);
  }
 else if(b>a && b>c)
 {
   printf("%d is max",b);
  }
  else
   printf("%d is max",c);
return 0;
  //getch();
}
