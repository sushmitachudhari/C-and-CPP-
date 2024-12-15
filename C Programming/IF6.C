#include<stdio.h>
#include<conio.h>
int main()
{
  float bs,hra,da,gs=0;
  //clrscr();
  printf("\n Enter Basic salary");
  scanf("%f",&bs);
  if(bs<=10000)
  {
   hra=bs*0.2;
   da=bs*0.8;
     gs=hra+da+bs;
     //printf("\nHRA=%f\nDA=%d",hra,da);
     //printf("\n Salary is %f",gs);
   }
   else if(bs<=20000 && bs>10000)
   {
    hra=bs*0.25;
    da=bs*0.9;
    gs=hra+da+bs;
    //printf("\n salary is %f", gs);
    }
    else
    {
     hra=bs*0.3;
     da=bs*0.95;
     gs=hra+da+bs;
     //printf("\n Salary is %f",gs);
     }
     printf("\nHRA=%f\nDA=%f",hra,da);
     printf("\n Salary is %f",gs);
    return 0;//getch();
  }
