#include<stdio.h>
#include<string.h>
#include<ctype.h>


//设立反转的字符串
const char* rev="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
//设立回答
const char* msg[]={"-- is not a palindrome.","-- is a regular palindrome.","-- is a mirrored string.","-- is a mirrored palindrome."};

char judege(char c){
    if(isalpha(c))
    {
        return rev[c-'A'];
    }else
    {
        return rev[c-'0'+25];
    }
}

int main()
{
    char s[30];
    while(scanf("%s",s)==1){
        int len=strlen(s);
        int m=1,p=1;
        for(int i=0;i<(len+1)/2;i++)
        {
            //判断回文
            if(s[i]!=s[len-1-i])
            {
                m=0;
            }
            //判断镜像
            if(judege(s[i])!=s[len-1-i])
            {
                p=0;
            }
        }
        printf("%s %s\n\n",s,msg[p*2+m]);


    }



    return 0;
}
