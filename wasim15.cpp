#include<iostream>
using namespace std;
int Check_Whether_A_Given_Number_Is_Prime_Or_Not(int a);
int main()
{
    int a;
    cout<<"Enter any number"<<endl;
    cin>>a;
    if(Check_Whether_A_Given_Number_Is_Prime_Or_Not(a))
    {
        cout<<"Prime Number";
    }
    else
    {
        cout<<"Not Prime Number";
    }
    cout<<endl;
    return 0;
}
int Check_Whether_A_Given_Number_Is_Prime_Or_Not(int a)
{
    int i=2;
    while(i<=a)
    {
        if(a%i==0)
        {
            break;
        }
        i++;
    }
    if(a==i)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}