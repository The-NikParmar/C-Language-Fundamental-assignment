#include<stdio.h>
int main()
{
	int i,n,no[100];
	printf("how many Element you want to enter");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&no[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",no[i]);
	}
	for(i=0;i<n;i++)
	{
		if(no[0]>no[i])
		{
			no[0]=no[i];
		}
		
	}
	printf("\n %d is Smallest from array ",no[0]);
	return 0;
}
