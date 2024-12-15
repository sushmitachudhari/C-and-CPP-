#include<stdio.h>
#include<conio.h>
void main()
{
int temp=0, a[5],i,j;
 clrscr();
 printf("\nEnter 5 elements in array");
 for(i=0;i<5;i++)
 {
   scanf("%d",&a[i]);
   }
 for(i=0;i<5;i++)
 { for(j=i+1;j<5;j++)
 {if(a[i]>a[j])
 {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
}
  }
   }
   for(i=0;i<5;i++)
   {
    printf("\n %d ",a[i]);
   }
   if(a[3]==a[4])
   {
    printf("\nSecond large is %d",a[2]);
   }
   else
    printf("\n Second large is %d",a[3]);

   getch();
 }
