#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=0;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			for(k=j;k<=j;k++)
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
