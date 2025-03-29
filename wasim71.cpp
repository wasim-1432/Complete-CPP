#include<iostream>
using namespace std;
int Calculate_HCF_Of_Given_Two_Numbers(int a,int b);
int main()
{
    int a,b;
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
    cout<<"HCF is="<<Calculate_HCF_Of_Given_Two_Numbers(a,b);
    cout<<endl;
    return 0;
}
int Calculate_HCF_Of_Given_Two_Numbers(int a,int b)
{
    int i=2,s=1;
    while(i<=a || i<=b)
    {
        if(a%i==0 && b%i==0)
        {
            a=a/i;
            b=b/i;
            s=s*i;
            continue;
        }
        i++;
    }
    return s;
}