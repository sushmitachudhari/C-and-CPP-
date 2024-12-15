#include<stdio.h>
#include<conio.h>
void main()
{
 int num,l,f;
 clrscr();
 printf("Enter four digit number\n");
 scanf("%d",&num);
 l=num%10;//1234  4

  num=num/10;//123

 f=num/100;//23

 num=num%100;
    l=l*1000;
    num=num*10;
    num=l+num+f;
  printf("\n Number after swaping %d",num);
 getch();
}
