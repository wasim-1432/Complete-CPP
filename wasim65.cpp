#include<iostream>
using namespace std;
int Calculate_Prime_Factor_Of_A_Given_Number(int a);
int main()
{
    int a;
    cout<<"Enter any number"<<endl;
    cin>>a;
    Calculate_Prime_Factor_Of_A_Given_Number(a);
    cout<<endl;
    return 0;
}
int Calculate_Prime_Factor_Of_A_Given_Number(int a)
{
    int arr[10],i=2,k=0;
    while(i<=a)
    {
        if(a%i==0)
        {
            a=a/i;
            arr[k]=i;
            k++;
            continue;
        }
        i++;
    }
    cout<<"Prime factor is: ";
    for(i=0;i<=k-1;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            cout<<arr[i]<<" ";
        }
    }
}