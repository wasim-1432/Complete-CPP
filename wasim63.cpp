#include<iostream>
using namespace std;
int Rotate_An_Array(int arr[],int size,int n,int d=0);
int main()
{
    int arr[]={36,12,24,13};
    Rotate_An_Array(arr,4,1);
    cout<<endl;
    return 0;
}
int Rotate_An_Array(int arr[],int size,int n,int d)
{
    if(d)
    {
        int i;
        cout<<"Right Rotaion is: ";
        while(n)
        {
            int temp=arr[size-1];
            for(i=size-1;i>0;i--)
            {
                arr[i]=arr[i-1];
            }
            arr[i]=temp;
            n--;
        }
        for(i=0;i<=size-1;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    else
    {
        int i;
        cout<<"Left Rotation is: ";
        while(n)
        {
            int temp=arr[0];
            for(i=0;i<size-1;i++)
            {
                arr[i]=arr[i+1];
            }
            arr[i]=temp;
            n--;
        }
        for(i=0;i<=size-1;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}