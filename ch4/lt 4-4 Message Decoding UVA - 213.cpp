#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;
const int N=7;
const int M=1<<(N+1);

char head[M];
int bi[N+1];


void init()
{
    bi[1]=0;
    int fact=1;
    for(int i=1;i<7;i++)
    {
        fact<<=1;
        bi[i+1]=bi[i]+fact-1;
        printf("%d ",bi[i]);
    }
}

int get01()
{
    char c;
    while((c=getchar())=='\n');
    return c-'0';

}

int getMsg(int len)
{
    int res=0;
    while(len--)
    {
        res=2*res+get01();
    }
    return res;
}

char decode(int msg,int len)
{
    return head[bi[len]+msg];
}

int main()
{
    init();
    while(gets(head)){
        int len;
        //��ȡ�ոտ�ʼ��ǰ��λ������
        while(len=getMsg(3)){
            int msg;
            //����Ϊlen�Ļ�ȡ�����������
            while((msg=getMsg(len))!=((1<<len)-1))
                putchar(decode(msg,len));

        }
        putchar('\n');
        getchar();
    }

    return 0;
}



