#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b,choice;
 printf("\n Enter two numbers");
 scanf("%d %d",&a,&b);
 printf("\n 1.Addition\n 2.Substraction\n 3.Multiplication\n 4.Division");
 printf("\n Enter Your Choice");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:printf("\nAddition is %d",a+b);break;
  case 2:printf("\nSubstraction is %d",a-b);break;
  case 3:printf("\nMultiplication is %d",a*b);break;
  case 4:printf("\nDivision is %d",a/b);break;
  default:printf("\n Invalid Choice!!!!");
}
return 0;
}
