#include<stdio.h>
#include<string.h>
#define maxn 100


int main()
{
    char s[maxn];
    int n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",s);
        int len=strlen(s);
        int ins=0,num=0;
        for(int i=0;i<len;i++)
        {
            if(s[i]=='O')
            {
                ins++;
            }else
            {
                ins=0;
            }
            num+=ins;
        }
        printf("%d\n",num);
    }



    return 0;
}
