#include<stdio.h>
#include<string.h>
#define maxn 105

int less(const char* str,int p,int q)
{
    int n=strlen(str);
    for(int i=0;i<n;i++)
    {
        if(str[(p+i)%n]!=str[(q+i)%n])
        {
            return str[(p+i)%n]<str[(q+i)%n];
        }
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d",&n);

    while(n--)
    {
        char s[maxn];
        scanf("%s",s);
        int len=strlen(s);
        int ins=1;
        for(int i=0;i<len;i++)
        {
            if(less(s,i,ins))
            {
                ins=i;
            }
        }
        for(int i=0;i<len;i++)
        {
            printf("%c",s[(i+ins)%len]);
        }
        printf("\n");
    }






    return 0;
}
