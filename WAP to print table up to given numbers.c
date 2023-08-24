#include<stdio.h>
int main()
{
	int no,i;
	printf("enter  No:- ");
	scanf("%d",&no);
	for(i=1;i<=10;i++)
	{
		printf("\n%d*%d=%d",no,i,no*i);
	}
	 return 0;
}
