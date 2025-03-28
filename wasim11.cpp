#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter any number"<<endl;
    cin>>a;
    if(a%2==0)
    {
        cout<<"Even Number";
    }
    else if(a%2!=0)
    {
        cout<<"Odd Number";
    }
    cout<<endl;
    return 0;
}