#include<iostream>
using namespace std;
int Check_Whether_A_Given_Number_Is_A_Term_Of_Fibonacci_Series_Or_Not(int n);
int main()
{
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    if(Check_Whether_A_Given_Number_Is_A_Term_Of_Fibonacci_Series_Or_Not(n))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    cout<<endl;
    return 0;
}
int Check_Whether_A_Given_Number_Is_A_Term_Of_Fibonacci_Series_Or_Not(int n)
{
    int a=0,b=1,s=0;
    while(n>=s)
    {
        a=b;
        b=s;
        if(s==n)
        {
            return 1;
        }
        s=a+b;
    }
    return 0;
}