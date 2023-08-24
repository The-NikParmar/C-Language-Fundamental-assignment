#include<stdio.h>
int main()
{
	int l,b,h,r,ans,choice;
	float pi=3.14;
	printf("\n 1.area of circle");
	printf("\n 2.area of rectangle");
	printf("\n 3.area of triangle");
	
	printf("\n==========choice==========");
	printf("\nenter your choice ");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("\nenter radius of circle");
		scanf("%d",&r);
		ans=pi*r*r;
		printf("radisu of  circle %d",ans);
	}else if(choice==2)
	{
		printf("enter your legth and height");
		scanf("%d %d",&l,&h);
		ans=l*h;
		printf("area of rectangle:- %d",ans);
	}else if(choice==3)
	{
		printf("enter yourb  base and heigh");
		scanf("%d %d",&b,&h);
		ans=(b*h)/2;
		printf("area of triangle %d",ans);
		
	}else
	{
		printf("invalid choice ");
	}
	return 0;
}
