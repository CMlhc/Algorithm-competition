#include<stdio.h>
#include<string.h>
#define maxn 1010
int a[maxn],b[maxn];

int main(){
    int n;
    int Game=0;
    while(scanf("%d",&n)==1&&n)
    {

        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Game %d:\n",++Game);
        for(;;)
        {
            int A=0,B=0;
            for(int i=0;i<n;i++)
            {
                scanf("%d",&b[i]);
                if(a[i]==b[i])
                {
                    A++;
                }
            }
            if(b[0]==0)
            {
                break;
            }
            for(int i=1;i<=9;i++)
            {
                int c1=0,c2=0;
                for(int j=0;j<n;j++)
                {
                    if(a[j]==i) c1++;
                    if(b[j]==i) c2++;
                }
                //加小的那个或者是相等的那个
                if(c1<c2) B+=c1;
                else B+=c2;
            }
            printf("    (%d,%d)\n",A,B-A);


        }

    }






    return 0;
}
