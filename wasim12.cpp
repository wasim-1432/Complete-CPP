#include<iostream>
using namespace std;
int main()
{
    int n,s=1;
    cout<<"Enter any number"<<endl;
    cin>>n;
    while(n)
    {
        s=s*n;
        n--;
    }
    cout<<"Factorial is="<<s;
    cout<<endl;
    return 0;
}