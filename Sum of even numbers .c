#include<stdio.h>
int main()
{
	int i,range=10,sum=0;
	for(i=1;i<=range;i++)
	{
		printf("%d \t",i);
		}	
	printf("\neven numbers from above:");
	for(i=1;i<=range;i++)
	{
		if(i%2==0)
		{
			printf("\n%d",i);
			sum=i+sum;
		}
	}
	printf("\n The sum of all even No:- %d",sum);
	
	return 0;
}
