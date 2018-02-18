#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
const int N=20;
int arr[6][6]={ {0,1,2,3,4,5},{1,5,2,3,0,4},{2,5,4,1,0,3},{4,5,3,2,0,1},{5,4,2,3,1,0},{3,5,1,4,0,2} };


char str1[N],str2[N];
bool fun();
char str[N];
int main()
{

    while(scanf("%s",str)!=EOF)
    {

        for(int i=0;i<6;i++)
        {
            str1[i]=str[i];
            str2[i]=str[i+6];
        }

        if(fun())
        {
            printf("TRUE\n");
        }else
        {
            printf("FALSE\n");
        }


    }



    return 0;
}

bool fun()
{
    char temp[N]={0};
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            temp[j]=str1[arr[i][j]];
        }

        for(int k=1;k<=4;k++)
        {
            char ch;
            ch=temp[1];
            temp[1]=temp[2];
            temp[2]=temp[4];
            temp[4]=temp[3];
            temp[3]=ch;
            if(strcmp(temp,str2)==0)
            {
                return true;
            }
        }
    }

    return false;
}


