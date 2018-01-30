#include<stdio.h>
#include<string.h>
#include<math.h>

#define maxn 10005
    int a[maxn];
    int b[maxn];
int judege(int *arr)
{

    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    for(int i=0;i<11;i+=2)
    {
        int aa=arr[i]<arr[i+1]?arr[i]:arr[i+1];
        int bb=arr[i]<arr[i+1]?arr[i+1]:arr[i];

        arr[i]=aa;
        //printf("%d ",aa);
        arr[i+1]=bb;
        //printf("%d ",bb);
    }
    for(int i=0;i<11;i+=2)
    {
        a[arr[i]]++;
    }
    for(int i=1;i<12;i+=2)
    {
        b[arr[i]]++;
    }

    int flage=1;
    for(int i=0;i<11;i+=2)
    {
        if(a[arr[i]]%2!=0)
        {
            flage=0;
        }
        if(b[arr[i+1]]%2!=0)
        {
            flage=0;
        }
    }
    memset(a,0,sizeof(a));
    int c=0;
    for(int i=0;i<12;i++)
    {
        if(a[arr[i]]==0)
        {
            c++;
        }
        a[arr[i]]++;

    }
    if(c>3)
    {
        flage=0;
    }
    for(int i=0;i<12;i++)
    {
        if(a[arr[i]]%4!=0)
        {
            flage=0;
        }
    }


    return flage;

}

int main()
{
    int arr[12]={0};
    while(~scanf("%d%d",&arr[0],&arr[1]))
    {
        for(int i=2;i<11;i+=2)
        {
            scanf("%d%d",&arr[i],&arr[i+1]);
        }

        if(judege(arr))
        {
            printf("POSSIBLE\n");
        }else
        {
            printf("IMPOSSIBLE\n");
        }





    }



    return 0;
}
