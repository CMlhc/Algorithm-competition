#include<stdio.h>

int main()
{
	long long a,b;
	int Case=0;
	int c;
	int arr[101]={0};

	while(scanf("%lld",&a)==1)
	{
		scanf("%lld",&b);
		scanf("%d",&c);
		if(a==0&&b==0&&c==0)
		{
			break;
		}
		long long d;
		for(int i=0;i<=c+3;i++)
		{
			arr[i]=a/b;
			d=a%b;
			a=d*10;	
		}
		printf("Case %d: %d.",++Case,arr[0]);
		for(int i=1;i<=c;i++)
		{
			if(i==c&&arr[i+1]>=5)
			{
				printf("%d",arr[i]+1);
			}else
			{
				printf("%d",arr[i]);
			}
			
		}
		printf("\n");
		
		
		
		
			
			
	}
	
	
	
	return 0;
}