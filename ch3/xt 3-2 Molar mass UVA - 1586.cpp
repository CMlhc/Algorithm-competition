#include<stdio.h>
#include<string.h>
#define maxn 105

const double num[4]={12.01,1.008,16.00,14.01};

int main()
{
    int n;
    scanf("%d",&n);
    char s[maxn];
    while(n--)
    {
        scanf("%s",s);
        int len=strlen(s);
        double sum=0.0;
        double temp=1.0;
        for(int i=0;i<len;i++)
        {
            int ins=1;

            if(s[i]=='C')
            {
                temp=num[0];
            }else if(s[i]=='H')
            {
                temp=num[1];
            }else if(s[i]=='O')
            {
                temp=num[2];
            }else if(s[i]=='N')
            {
                temp=num[3];
            }else
            {
                if(s[i+1]>='0'&&s[i+1]<='9'&&s[i+1]!='\0')
                {
                    ins=int(s[i+1]-'0')+int(s[i]-'0')*10-1;
                    i++;

                }else
                {
                   ins=int(s[i]-'0')-1;
                }

            }


                sum+=temp*ins;



        }

            printf("%.3f\n",sum);


    }



    return 0;
}
