#include<stdio.h>

int main()
{
	long long n,m;
	int Case=0;
	while(scanf("%lld",&n)==1)
	{
		scanf("%lld",&m);
		if(n==0&&m==0)
		{
			break;
		}
		float sum=0.0;
		for(long long i=n;i<=m;i++)
		{
			sum+=1.0/(i*i);
		}
		printf("Case %d: %.5lf\n",++Case,sum);
	}
	
	
	
	return 0;
}