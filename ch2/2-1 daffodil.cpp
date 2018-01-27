#include<stdio.h>

int main()
{
	int n;
	int flag=0;
	scanf("%d",&n);
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=10;j++)
		{
			for(int k=1;k<=10;k++)
			{
				if(n==(i*i*i+j*j*j+k*k*k))
				{
					flag=1;
					break;
				}
			}
		}
		
	}
	
	if(flag==1)
	{
		printf("yes");
	}else
	{
		printf("no");
	}
	
	
	
	return 0;
}