#include<stdio.h>
#define maxn 25
int n,k,m;
int a[maxn];
int left;


int go(int p,int d,int t)
{
    while(t--)
    {
        do{
            p=(p+d+n)%n;
        }while(a[p]==-1);

    }
    return p;


}

int main(){
    while(scanf("%d%d%d",&n,&k,&m)==3&&n)
    {
        for(int i=0;i<=n;i++)
        {
            a[i]=i;
        }

        left=n;
        //p1 表示 A,一开始指向前一个数，92 表示 B，也需要指向前一个数。
        int p1=n-1,p2=0;
        while(left)
        {
            p1=go(p1,1,k);
            p2=go(p2,-1,m);

            printf("%3d",p1+1);
            left--;
            if(p1!=p2)
            {
                printf("%3d",p2+1);
                left--;
            }
            a[p1]=a[p2]=-1;
            if(left)
            {
                printf(",");
            }

        }

        printf("\n");


    }

    return 0;
}
