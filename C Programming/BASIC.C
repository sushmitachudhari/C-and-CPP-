#include<stdio.h>
#include<conio.h>
int main()
{
 float bs,gs,hra,da;
 //clrscr();
 printf("\n Enter the Basic salary of employee");
 scanf("\n %f ",&bs);
 bs<=10000?printf("\n Hra=%f\n Da=%f",(hra=bs*0.2),(da=bs*0.8)):bs<=20000 && bs>11000?printf("\n Hra=%f\nDa=%f",(hra=bs*0.25),(da=bs*0.9)):printf("\n Hra=%f\nDa=%f",(hra=bs*0.3),(da=bs*0.95));

  gs=bs+hra+da;
  printf("\n Gross salary is %f",gs);
// getch();
return 0;
}
