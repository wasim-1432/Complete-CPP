#include<iostream>
using namespace std;
int Print_Prime_Number_Between_Two_Given_Numbers(int a,int b);
int main()
{
    int a,b;
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
    Print_Prime_Number_Between_Two_Given_Numbers(a,b);
    cout<<endl;
    return 0;
}
int Print_Prime_Number_Between_Two_Given_Numbers(int a,int b)
{
    int s,i;
    for(s=a;s<b;s++)
    {
        i=2;
        while(i<=s)
        {
            if(s%i==0)
            {
                break;
            }
            i++;
        }
        if(s==i)
        {
            cout<<s<<" ";
        }
    }
}