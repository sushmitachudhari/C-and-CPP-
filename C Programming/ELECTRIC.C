#include<stdio.h>
#include<conio.h>
int  main()
{
 float r,v,c;
 
 printf("\nEnter voltage and current");
 scanf("%f%f",&v,&c);
 r=v/c;                                                                                 
 printf( "\nResistance is %f",r);

  printf("\nEnter voltage and resistance");
 scanf("%f%f",&v,&r);
 c=v/r;
 printf( "\nCurrent is %f",c);

  printf("\nEnter  current and resistance");
 scanf("%f%f",&c,&r);
 v=c*r;
 printf( "\nVoltage is %f",r,v,c);
 return 0;
}
