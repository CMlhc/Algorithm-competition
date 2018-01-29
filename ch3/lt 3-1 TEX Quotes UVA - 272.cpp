#include<stdio.h>

int main()
{
    int c,q=1;
    //特别注意关于输入的问题，getchar()能输入回车,scanf("%s",c)则不能读取回车
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
