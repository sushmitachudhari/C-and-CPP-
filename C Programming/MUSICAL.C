#include<stdio.h>
#include<conio.h>
int main()
{
 int eiq,chef=0,miq, alm=0;
 //clrscr();
 eiq=170;
 miq=77;
 printf("\n Enter chef iq before learning musical instruments");
 scanf("%d",&chef);
 alm=chef+miq;
 printf("After learning Musical instruments chef IQ ",alm);
 alm>eiq?printf("\n %d \tYES",alm):printf("\n %d\t NO",alm);
 return 0;
 //getch();
}
