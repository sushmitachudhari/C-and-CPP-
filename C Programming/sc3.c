#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,i,sum;
	char ch;
	printf("\n1.Divisible by 5 and 11\n2Check Tringle Type\n3.Leap Year\n4.Vowel,Consonant\n5.Check Charector\nEnter Your choice");
	scanf("%d",&i);
	switch(i)
	{
		case 1:printf("\nEnter a  number");
		       scanf("%d",&a);
		       if(a%5==0 && a%11==0)
		        printf("\nDivisible by 5 and 11");
		       else
			    printf("\nNot Divisible"); 
		       	break;
		case 2:printf("\nEnter three angles of triangle");
		        scanf("%d %d %d",&a,&b,&i);
		        sum=a+b+i;
				if((a==b && b==i && a==i) && (sum==180))
				  {printf("\nEquilateral");
				   } 
				else if(a!=b && b!=i && a!=i)
				   printf("\n Scalane");
				else if(sum!=180)
				printf("\n Not valid Tringle");
				else
			    printf("\nIsoscales"); 
		        break;
		case 3:printf("\nEnter year");
		        scanf("%d",&a);
				if(a%4==0)
				  printf("\n %d is Leap year",a);
				else
				  printf("\n %d is not Leap year",a);
				break;
		case 4: printf("Enter a charactor");
  				scanf("%c",&ch);
  				if(ch=='A' || ch=='E'|| ch=='I'||ch=='O' ||ch=='U'|| ch=='a' || ch=='e'|| ch=='i'||ch=='o' ||ch=='u')
   				 printf(" %c is vowel",ch);
  				else
  			     printf("%c is consonant",ch);
				break;
		case 5: printf("\n Enter a charector");
 				 scanf("%c",&ch);
  				if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
  				 {
    				 printf("\n %c is Alphabet",ch);
   					}
   					else if(ch>='0' && ch<='9')
   				{
   				 printf("\n %c is Digit",ch);
   				}
   				else
                printf("\n %c is Special Symbol",ch);
                break;
		
		default:printf("Invalid Choice");			    		   
				      		 
	}
	return 0;
}
