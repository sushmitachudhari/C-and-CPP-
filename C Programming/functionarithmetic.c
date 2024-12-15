#include<stdio.h>
int main()
{
	void calAdd(int,int);
	void calSub(int,int);
	void calMul(int,int);
	void calDiv(int,int);
	void calMod(int,int);
	
	int num1,num2;
	printf("\nEnter two numbers");
	scanf("%d %d",&num1, &num2);
	
	calAdd(num1,num2);
	calSub(num1,num2);
	calMul(num1,num2);
	calDiv(num1,num2);
	calMod(num1,num2);
	
}
void calAdd(int x,int y)
{
	printf("\nAddition is %d ", x+y);
}
void calSub(int a,int b)
{
	printf("\nSubstraction is %d ",a-b);
}
void calMul(int x,int y)
{
	printf("\nMultiplication is %d ", x*y);
}
void calDiv(int a,int b)
{
	printf("\nDivision is %d ",a/b);
}
void calMod(int x , int y)
{
	printf("\nMod is %d",x%y);
}
