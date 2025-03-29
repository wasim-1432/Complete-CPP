#include<iostream>
using namespace std;
int Swap_Two_Arrays(int A[],int B[],int size);
int main()
{
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int A[size],B[size];
    cout<<"Enter the elements of first array"<<endl;
    for(int i=0;i<=size-1;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter the elements of second array"<<endl;
    for(int i=0;i<=size-1;i++)
    {
        cin>>B[i];
    }
    Swap_Two_Arrays(A,B,size);
    cout<<endl;
    return 0;
}
int Swap_Two_Arrays(int A[],int B[],int size)
{
    int i,temp[size];
    for(i=0;i<=size-1;i++)
    {
        temp[i]=A[i];
        A[i]=B[i];
        B[i]=temp[i];
    }
    cout<<"First Array is: ";
    for(i=0;i<=size-1;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<"\nSecond Array is: ";
    for(i=0;i<=size-1;i++)
    {
        cout<<B[i]<<" ";
    }
}