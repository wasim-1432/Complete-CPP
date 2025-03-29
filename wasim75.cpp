#include<iostream>
using namespace std;
int Merge_Two_Sorted_Array(int A[],int B[],int size);
int main()
{
    int A[]={1,2,3,4,5,6},B[]={7,8,9,10,11,12};
    Merge_Two_Sorted_Array(A,B,6);
    cout<<endl;
    return 0;
}
int Merge_Two_Sorted_Array(int A[],int B[],int size)
{
    int i,j,k;
    int *temp=(int*)calloc(2*size,sizeof(int));
    for(i=0,j=0,k=0;i<=size-1 && j<=size-1;k++)
    {
        if(A[i]<B[j])
        {
            temp[k]=A[i];
            i++;
        }
        if(A[i]>B[j])
        {
            temp[k]=B[j];
            j++;
        }
    }
    while(i<size)
    {
        temp[k]=A[i];
        i++;
        k++;
    }
    while(j<size)
    {
        temp[k]=B[j];
        j++;
        k++;
    }
    cout<<"Merged Array is: ";
    for(k=0;k<=2*size-2;k++)
    {
        cout<<temp[k]<<" ";
    }
    free(temp);
}