#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define maxn 100


int main()
{
    int n;
   scanf("%d",&n);
   getchar();
    while(n--)
    {
        getchar();
        char s[maxn];
        gets(s);
        int len=strlen(s);

        int i,j,k;
        for(i=1;i<=len;i++)
        {
            if(len%i==0)
            {
                int flage=0;
            for(j=0;j<i;j++)
            {
                for(k=j;k<len;k+=i)
                {
                    if(k+i<len)
                    {
                        if(s[k]==s[k+i])
                        {
                            flage=1;
                        }else
                        {
                            flage=0;
                            break;
                        }

                    }

                }
                if(flage==0)
                {
                    break;
                }

            }
            if(flage==1&&j==i)
            {
                break;
            }
            }


        }





    }




    return 0;
}
