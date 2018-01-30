#include<stdio.h>
#include<string.h>

int main()
{
    int num;

    int n;
    scanf("%d",&n);
    while(n--)
    {
        int arr[10];
        int c;
        memset(arr,0,sizeof(arr));
        scanf("%d",&c);
        int a,b;
            int i;
            for(int i=1;i<=c;i++)
            {
                int k=i;
                for(;;)
                {
                    if(k==0)
                    {
                        break;
                    }
                    a=k%10;
                    arr[a]++;
                    k/=10;
                }

            }



        for(int i=0;i<9;i++)
        {
            printf("%d ",arr[i]);
        }

           printf("%d\n",arr[9]);




    }



    return 0;
}
