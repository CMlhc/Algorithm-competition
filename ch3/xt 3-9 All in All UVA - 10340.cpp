#include<stdio.h>
#include<string.h>
#define maxn 100

int compare(const char* s1,const char *s2)
{
    int len1=strlen(s1);
    int len2=strlen(s2);
    int i,j=0;
    for(int i=0;i<len2;i++)
    {
        if(s1[j]==s2[i])
        {
            j++;
        }
        if(j==len1)
        {
            break;
        }
    }
    if(j==len1)
    {
        return 1;
    }else
    {
        return 0;
    }

}



int main()
{
    char s1[maxn];
    char s2[maxn];
    while(scanf("%s",s1)==1)
    {
        scanf("%s",s2);
        if(compare(s1,s2))
        {
            printf("Yes\n");
        }else
        {
            printf("No\n");
        }

    }





    return 0;
}
