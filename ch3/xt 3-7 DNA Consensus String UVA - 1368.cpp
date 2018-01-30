#include<stdio.h>
#include<string.h>
#define maxn 1005
char s[maxn];


int main()
{
    char c[4]={'A','C','G','T'};
    int num=0;
    scanf("%d",&num);
    while(num--)
    {
        int m,n;
        int arr[maxn][4];
        memset(arr,0,sizeof(arr));
        scanf("%d%d",&m,&n);
        for(int a=0;a<m;a++)
        {
            memset(s,NULL,sizeof(s));
            scanf("%s",s);
            for(int i=0;i<n;i++)
            {
                if(s[i]=='A')
                {
                    arr[i][0]++;
                }else if(s[i]=='C')
                {
                    arr[i][1]++;
                }else if(s[i]=='G')
                {
                    arr[i][2]++;
                }else if(s[i]=='T')
                {
                    arr[i][3]++;
                }

            }
        }
        int k,temp,sum=0;;
        for(int i=0;i<n;i++)
        {
            k=0,temp=0;;
            for(int j=0;j<4;j++)
            {

                if(arr[i][j]>k)
                {
                    k=arr[i][j];
                    temp=j;
                }
                sum+=arr[i][j];
            }
            sum-=arr[i][temp];
            printf("%c",c[temp]);
        }
        printf("\n");
        printf("%d\n",sum);

    }



    return 0;
}
