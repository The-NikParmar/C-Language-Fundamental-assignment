#include<stdio.h>
int main()
{
	int no,sum=0;
	printf("enter your digit No:- ");
	scanf("%d",&no);
	while(no>0)
	{
		sum=sum+(no%10);
		no=no/10;
	}
	printf("\n sum of digit :- %d",sum);
	return 0;
}
