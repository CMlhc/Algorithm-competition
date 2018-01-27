#include<stdio.h>

int main()
{
	int a,b,c,num=0;
	while(scanf("%d",&a)==1)
	{
		scanf("%d",&b);
		scanf("%d",&c);
		int flage=1;
		for(int i=10;i<=100;i++)
		{
			if(i%3==a&&i%5==b&&i%7==c)
			{
				printf("Case %d: %d\n",++num,i);
				flage=0;
			}
		}
		if(flage)
		{
			printf("Case %d: No answer\n",++num);
		}
		
	}
	
	
	
	
	return 0;
}