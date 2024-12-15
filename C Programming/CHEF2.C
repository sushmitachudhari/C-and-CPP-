#include<stdio.h>
#include<conio.h>
void main()
{
 int v1,v2;
 clrscr();
 printf("\n Enter the volume.1, volume.2 of remote");
 scanf("%d %d",&v1,&v2);
 v1>v2?printf("\n %d %d\t--by  %d",v1,v2,v1-v2):v1<v2?printf("\n%d %d\t ++by %d",v1,v2,v2-v1):printf("\n %d %d volume Not increased",v1,v2);
 getch();
}