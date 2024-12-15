#include<stdio.h>
#include<conio.h>
int main()
{
 int i;
 printf("\n Enter Choice Between 1 to 7  ");
 scanf("%d",&i);
 switch(i)
 {
 	case 1:printf("\nMonday");break;
 	case 2:printf("\nTuesday");break;
 	case 3:printf("\nWednesday");break;
 	case 4:printf("\nThusday");break;
 	case 5:printf("\nFriday");break;
 	case 6:printf("\nSaturday");break;
 	case 7:printf("\nSunday");break;
 	default:printf("\nInvalid Day");
 }	
 return 0;
}
