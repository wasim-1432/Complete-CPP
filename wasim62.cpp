#include<iostream>
using namespace std;
#include<string.h>
char *Sort_String(char *str,bool n=0);
int main()
{
    char str[]="bca";
    cout<<"Required string is="<<Sort_String(str);
    cout<<endl;
    return 0;
}
char *Sort_String(char *str,bool n)
{
    int round,i,l;
    l=strlen(str);
    if(n)
    {
        for(round=1;round<l;round++)
        {
            for(i=0;i<=l-round-1;i++)
            {
                if(str[i]>str[i+1])
                {
                    char temp;
                    temp=str[i];
                    str[i]=str[i+1];
                    str[i+1]=temp;
                }
            }
        }
        return str;
    }
    for(round=0;round<=l-2;round++)
    {
        for(i=0;i<=l-round-1;i++)
        {
            if(str[i]<str[i+1])
            {
                char temp;
                temp=str[i];
                str[i]=str[i+1];
                str[i+1]=temp;
            }
        }
    }
    return str;
}