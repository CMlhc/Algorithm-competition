#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=n;i>=0;i--)
	{
		for(int j=1;j<=2*i-1;j++)
		{
			printf("#");
		}
		printf("\n");
		for(int k=0;k<=n-i;k++)
		{
			printf(" ");
		}
	}
	
	
	
	return 0;
}