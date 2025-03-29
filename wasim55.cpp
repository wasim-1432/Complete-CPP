#include<iostream>
using namespace std;
int Sum(int a,int b);
float Sum(float a,float b);
int main()
{
    int a,b;
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
    cout<<"Sum is="<<Sum(a,b);
    float c,d;
    cout<<"\nEnter any two numbers"<<endl;
    cin>>c>>d;
    cout<<"Sum is="<<Sum(c,d);
    cout<<endl;
    return 0;
}
int Sum(int a,int b)
{
    return a+b;
}
float Sum(float a,float b)
{
    return a+b;
}