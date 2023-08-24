#include<stdio.h>
int main()
{
	int No1,No2,ans,choice;
	
	printf("1:- Addition");
	printf("\n2:- Subtraction");
	printf("\n3:- Multiplication");
	printf("\n4:- Division");
	printf("\n5:- Modulo");
	printf("\n-----------Choice------------");
	printf("\nenter your choice");
	scanf("%d",&choice);
	printf("\nenter value of No1:-");
	scanf("%d",&No1);
	printf("enter value of No2:-");
	scanf("%d",&No2);
	if(choice==1)
	{
		ans=No1+No2;
		printf("sum of two no %d :-",ans);
	}
	else if(choice==2)
	{
		ans=No1-No2;
		printf("subtraction of Two No %d:-",ans);
	}
	else if(choice==3)
	{
		ans=No1*No2;
		printf("Multiplication of Two no %d",ans);
	}else if(choice==4)
	{
		ans=No1/No2;
		printf("Division of two No %d",ans);
	}else if(choice==5)
	{
		ans=No1%No2;
		printf("Modulo %d",ans);
	}else{
		printf("innvalid your choice Please select valid choice");
	}
	return 0;
}
