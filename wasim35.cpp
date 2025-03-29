#include<iostream>
using namespace std;
int main()
{
    int arr[10],i,sum=0;
    cout<<"Enter any 10 numbers"<<endl;
    for(i=0;i<=9;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"Sum is="<<sum;
    cout<<endl;
    return 0;
}