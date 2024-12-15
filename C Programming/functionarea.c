//function for area calculation
//circle pi r sq,rectangle,tringle,quadrilateral=side cub,area of circumfarence= 2 pi r.
#include<stdio.h>
int main()
{
	void areaCircle(float radius);
	void areaRect(int l,int b);
	void areaTri(int base, int height);
	void areaQuadrl(int side);
	void areaCircumfarence( float radius);
	
	 int ch,l,b,base,height,side;
	 float radius;
	 printf("======CHOOSE======\n1.Area of Circle\n2.Area of rectangle\n3.Area of Tringle\n4.Area of Quadrilateral\n5.Area of Circumfarence \n================\nChoose from above");
	scanf("%d",&ch);
	switch(ch)
	{
	  case 1:printf("\nEnter Radius of Circle");
	        scanf("%f",&radius);
	        areaCircle(radius);break;
				
	  case 2:printf("\nEnter Length and Breadth of rectangle");
	        scanf("%d %d",&l,&b);
	        areaRect(l,b);break;	
	        
	  case 3:printf("\nEnter Base and height of Tringle");
	        scanf("%d %d",&base,&height);
	        areaTri(base,height);break;
	        
	  case 4:printf("\nEnter Side of Quadrilateral");
	        scanf("%d",&side);
	        areaQuadrl(side);break;
	        
	  case 5:printf("\nEnter Radius of Circle");
	        scanf("%f",&radius);
	        areaCircumfarence(radius);break;							      
	  default:printf("\n You have Entered Invalid Choice !!!!!");       
	} 
	 
 } 
 void areaCircle(float r)
 {  
 	printf("\n Area of Circle is %f",3.14*r*r);
 }
 	void areaRect(int l,int b)
 	{
 	 printf("\nArea of Rectangle is %d ",l*b);	
	}
	void areaTri(int base, int height)
	{
	 printf("\nArea of Triangle is %f ",0.5*base*height);	
	}
	void areaQuadrl(int side)
	{
		printf("\nArea of Quadrilateral is %d ",side*side*side);
	}
	void areaCircumfarence( float radius)
	{
		printf("\nArea of Circumfarence is %f ",2*3.14*radius);
	}
