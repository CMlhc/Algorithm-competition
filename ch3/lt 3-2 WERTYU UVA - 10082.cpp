// ��for ���ǵ��ж� s[i] ��ֵ�Ƿ�Ϊ���Խ�ʡ�ж�ʱ��


#include<stdio.h>


int main()
{
    int c;
    char s[]="`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";
    while((c=getchar())!=EOF)
    {
        int i,q=1;
        for(i=0;s[i]&&s[i]!=c;i++);

            if(s[i]==c)
            {
                putchar(s[i-1]);
                q=!q;
            }

        if(q)
        {
            putchar(c);
        }

    }




    return 0;
}
