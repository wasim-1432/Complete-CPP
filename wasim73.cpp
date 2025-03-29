#include<iostream>
#include<string.h>
using namespace std;
char *Print_Sub_String(char str[],int start,int end=-1);
int main()
{
    char str[]="Mohd Wasim";
    Print_Sub_String(str,3);
    cout<<endl;
    return 0;
}
char *Print_Sub_String(char str[],int start,int end)
{
    int i,l;
    if(end==-1)
    {
        l=strlen(str);
        for(i=start;i<=l;i++)
        {
            cout<<str[i];
        }
    }
    else
    {
        for(i=start;i<end;i++)
        {
            cout<<str[i];
        }
    }
}