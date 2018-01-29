#include<stdio.h>
#include<string.h>

#define maxn 100005
long long a[maxn];
int main()
{
    int b[10];
    memset(a,0,sizeof(a));

    for(long long i=0;i<maxn;i++)
    {
        long sum=i;
        memset(b,0,sizeof(b));
        long temp=i,j=0;;
        while(temp!=0)
        {
            b[j]=temp%10;
            temp/=10;
            j++;
        }
        for(int k=0;k<10;k++)
        {
            sum+=b[k];
        }
        if(a[sum]==0)
        {
            a[sum]=i;
        }

    }

    int n;
    long long t;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&t);
        printf("%lld\n",a[t]);
    }





    return 0;
}
