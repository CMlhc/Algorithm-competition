#include<stdio.h>
#include<string.h>
#define maxn 20
int arr[maxn];


int main()
{
	int n,x,y,tot=0;
	
	scanf("%d",&n);
	memset(arr,0,sizeof(arr));
	tot=arr[x=0][y=n-1]=1;
	while(tot<n*n)
	{
		
		while(x+1<n && !arr[x+1][y]) arr[++x][y]=++tot;
		while(y-1>=0 && !arr[x][y-1]) arr[x][--y]=++tot;
		while(x-1>=0 && !arr[x-1][y]) arr[--x][y]=++tot;
		while(y+1<n && !arr[x][y+1]) arr[x][++y]=tot++;
	}	
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}