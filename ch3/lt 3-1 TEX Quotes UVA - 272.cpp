#include<stdio.h>

int main()
{
    int c,q=1;
    //�ر�ע�������������⣬getchar()������س�,scanf("%s",c)���ܶ�ȡ�س�
    while((c=getchar())!= EOF)
    {
        if(c=='"')
        {
            printf("%s",q? "``":"''");
            q=!q;
        }else
        {
            printf("%c",c);
        }
    }




    return 0;
}
