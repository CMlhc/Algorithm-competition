#include<stdio.h>
#include<string.h>
#include<math.h>

int is_prime(int n)
{
    //�жϷ�0����
    if(n<=1) return 0;
    // floor ��ʾ����ȡ��
    int m=floor(sqrt(n)+0.5);
    for(int i=2;i<=m;i++)
    {
        if(n%i==0) return 0;
    }

    return 1;
}

int main()
{
    int n;
    printf("�����������жϵ���:\n");
    scanf("%d",&n);
    if(is_prime)
    {
        printf("Yes.\n");
    }else
    {
        printf("No.\n");
    }



    return 0;
}
