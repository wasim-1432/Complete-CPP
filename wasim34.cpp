#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
    if(a>b)
    {
        cout<<"Max is="<<a;
    }
    else
    {
        cout<<"Max is="<<b;
    }
    cout<<endl;
    return 0;
}