#include<stdio.h>
int main()
{
	int year,days,ans,choice;
	printf("1.Convert years into days");
	printf("\n2.Convert days into years");
	printf("\n==========choice=========");
	printf("\n enter your choice :-");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("enter your years");
		scanf("%d",&year);
		ans=365*year;
		printf("your days is %d",ans);
	}else if(choice==2)
	{
		printf("enter your days");
		scanf("%d",&days);
		ans=days/365;
		printf("your years is %d",ans);
	}
	else{
		printf("invalid choice");
	}
	return 0;
}
