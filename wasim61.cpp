#include<iostream>
using namespace std;
int Ascending_Or_Descending_Order(int arr[],int size,bool n=0);
int main()
{
    int arr[]={1,9,8,7,56,0};
    Ascending_Or_Descending_Order(arr,6);
    cout<<endl;
    return 0;
}
int Ascending_Or_Descending_Order(int arr[],int size,bool n)
{
    if(n)
    {
        int round,i;
        for(round=1;round<=size-1;round++)
        {
            for(i=0;i<=size-round-1;i++)
            {
                if(arr[i]>arr[i+1])
                {
                    int temp;
                    temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            }
        }
        for(i=0;i<=size-1;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    else
    {
        int round,i;
        for(round=1;round<=size-2;round++)
        {
            for(i=0;i<=size-round-1;i++)
            {
                if(arr[i]<arr[i+1])
                {
                    int temp;
                    temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            }
        }
        for(i=0;i<=size-1;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}