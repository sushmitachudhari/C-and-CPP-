//struct program
#include<stdio.h>
int main()
{
	struct stud{
		int rno;
		char name[20];
		double m1,m2,m3,total;
		double percent;
		char place[20];
	} s[5];
	int i;
	printf("\nEnter Details of Five Students:\nRoll_no,Name,M1,M2,M3,Place");
	for(i=0;i<1;i++)
	{
		printf("\nEnter %d Student",i+1);
		scanf("%d %s %lf %lf %lf %s",&s[i].rno,&s[i].name,&s[i].m1,&s[i].m2,&s[i].m3,&s[i].place);
	}
	printf("\nDetails of All Students");
	printf("\nROLL_NO\tNAME\t\tM1\tM2\tM3\tTOTAL\tPERCENT\tPLACE");
		for(i=0;i<1;i++)
	{
		s[i].total=0;
		s[i].total=s[i].m1+s[i].m2+s[i].m3;
		s[i].percent=s[i].total/3.0;
		printf("\n%d\t%s\t%f\t%f\t%f\t%f\t%f\t%s",s[i].rno,s[i].name,s[i].m1,s[i].m2,s[i].m3,s[i].total,s[i].percent,s[i].place);
	}
}
