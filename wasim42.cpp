#include<iostream>
using namespace std;
int Find_Heighest_Value_Digit_In_A_Given_Number(int n);
int main()
{
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    cout<<"Max Digit is="<<Find_Heighest_Value_Digit_In_A_Given_Number(n);
    cout<<endl;
    return 0;
}
int Find_Heighest_Value_Digit_In_A_Given_Number(int n)
{
    int t,r;
    r=n%10;
    n=n/10;
    while(n)
    {
        t=n%10;
        if(t>=r)
        {
            r=t;
        }
        n/=10;
    }
    return r;
}