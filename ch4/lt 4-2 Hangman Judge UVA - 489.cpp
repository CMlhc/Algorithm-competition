#include<stdio.h>
#include<string.h>
#define maxn 100
char s1[maxn];
char s2[maxn];
int left,chance;
int win,lose;

void guess(char ch)
{
    int bad=1;
    int len1=strlen(s1);
    for(int i=0;i<len1;i++)
    {
        if(s1[i]==ch)
        {
            left--;
            bad=0;
            s1[i]=' ';
        }
    }



    if(bad)
    {
        chance--;
    }
    if(!left)
    {
        win=1;
    }
    if(!chance)
    {
        lose=1;
    }
}

int main()
{
    int d;
    while((scanf("%d%s%s",&d,s1,s2)==3)&&d!=-1){
            int len2=strlen(s2);
            left=strlen(s1);
            chance=7;
            win=lose=0;
            for(int i=0;i<len2;i++){
                guess(s2[i]);
                if(win||lose)
                {
                    break;
                }
            }
            printf("Round %d\n",d);
            if(win)
            {
                printf("You win.\n");
            }else if(lose)
            {

                printf("You lose.\n");
            }else
            {
                printf("You chickened out.\n");
            }

          }
    return 0;
}
