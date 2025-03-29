#include<iostream>
using namespace std;
int Max_Number(int a,int b);
float Max_Number(float a,float b);
int main()
{
    int a,b;
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
    cout<<"Max is="<<Max_Number(a,b);
    float c,d;
    cout<<"\nEnter any two numbers"<<endl;
    cin>>c>>d;
    cout<<"Max is="<<Max_Number(c,d);
    cout<<endl;
    return 0;
}
int Max_Number(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
float Max_Number(float a,float b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}