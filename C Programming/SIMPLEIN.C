#include<stdio.h>
#include<conio.h>
int main()
{
 int si,p,ri,t,ci,n;
  printf("\n Enter principal,rateof interest, time");
 scanf("\n%d %d %d",&p,&ri,&t);
 si=(p*ri*t)/100;
 printf("\n Simple interest is %d",si);    //ci=p(1+(r/100))^n -p

 printf("\n Enter principal,rateof interest");
 scanf("\n%d %d %d",&p,&ri,&n);
 ci=p*(1+(ri/100))^n-p;
 printf("\nCompound interest is %d",ci);
 return 0;
}
