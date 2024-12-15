#include<stdio.h>
#include<conio.h>
void main()
{
 float p,ch,b,m,c,total=0,percentage;
 clrscr();
 printf("\n Enter Marks of Five subjects");
 scanf("%f %f %f %f %f",&p,&ch,&b,&m,&c);
    total=p+ch+b+m+c;
 percentage=total/5;
 printf("\n %f\n %f",total,percentage);
 if(percentage>=90 &&percentage<=100)
    printf("\nGrade A");
 else if(percentage>=80 &&percentage<90)
	printf("\nGrade B");
 else if(percentage>=70 && percentage<80)
	printf("\nGrade C");
 else if(percentage>=60 && percentage<70)
	printf("\nGrade D");
 else if(percentage>=40 && percentage<60)
	printf("\nGrade E");
 else
  printf("\n Grade F");

  getch();
 }