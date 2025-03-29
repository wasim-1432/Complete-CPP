#include<iostream>
using namespace std;
int Swap_Two_Numbers_Using_Call_By_Reference(int &a,int &b);
int main()
{
    int a,b;
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
    Swap_Two_Numbers_Using_Call_By_Reference(a,b);
    cout<<endl;
    return 0;
}
int Swap_Two_Numbers_Using_Call_By_Reference(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"A="<<a<<" B="<<b;
}