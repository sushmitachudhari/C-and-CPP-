#include<stdio.h>
#include<conio.h>
int main()
{
 int rno, m1,m2,m3,total=0,percent;
 //clrscr();
 printf("\n Enter Your Roll No , Marks of Physics, Chemistry,computer application");
 scanf("\n %d %d %d %d",&rno,&m1,&m2,&m3);
 total=m1+m2+m3;
 percent=total/3;
 printf("\n Roll No . %d \n Physics . %d \n Chemistry . %d \n Computer application . %d \nTotal of subject . %d \nPercentage . %d",rno,m1,m2,m3,total,percent);
 percent>75?printf("\n Division . First Class Distinction "):percent<75 &&percent>50?printf("\n Division . Second class"):printf( "\n Fail");
// getch();
return 0;
}
