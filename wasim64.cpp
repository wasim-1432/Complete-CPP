#include<iostream>
using namespace std;
int Calculate_LCM_Of_Three_Given_Numbers(int a,int b,int c);
int main()
{
    int a,b,c;
    cout<<"Enter any three numbers"<<endl;
    cin>>a>>b>>c;
    cout<<"LCM is="<<Calculate_LCM_Of_Three_Given_Numbers(a,b,c);
    cout<<endl;
    return 0;
}
int Calculate_LCM_Of_Three_Given_Numbers(int a,int b,int c)
{
    int i=2,s=1;
    while(a!=1 || b!=1 || c!=1)
    {
        if(a%i==0 && b%i==0 && c%i==0)
        {
            a=a/i;
            b=b/i;
            c=c/i;
            s=s*i;
            continue;
        }
        else if(a%i==0 && b%i==0)
        {
            a=a/i;
            b=b/i;
            s=s*i;
            continue;
        }
        else if(a%i==0 && c%i==0)
        {
            a=a/i;
            c=c/i;
            s=s*i;
            continue;
        }
        else if(b%i==0 && c%i==0)
        {
            a=a/i;
            b=b/i;
            s=s*i;
            continue;
        }
        else if(a%i==0)
        {
            a=a/i;
            s=s*i;
            continue;
        }
        else if(b%i==0)
        {
            b=b/i;
            s=s*i;
            continue;
        }
        else if(c%i==0)
        {
            c=c/i;
            s=s*i;
            continue;
        }
        i++;
    }
    return s;
}