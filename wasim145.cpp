#include<iostream>
using namespace std;
class Array
{
    private:
        int *ptr;
        int size;
    public:
        Array()
        {
            size=0;
            ptr=new int[size];
        }
        Array(int size)
        {
            this->size=size;
            ptr=new int[size];
        }
        void InputData()
        {
            cout<<"Enter the elements\n";
            for(int i=0;i<size;i++)
            {
                cin>>ptr[i];
            }
        }
        void ShowData()
        {
            for(int i=0;i<size;i++)
            {
                cout<<ptr[i]<<" ";
            }
        }
        Array operator=(Array n)
        {
            size=n.size;
            for(int i=0;i<size;i++)
            {
                ptr[i]=n.ptr[i];
            }
        }
        friend Array* operator+(Array,Array);
};
Array* operator+(Array a1,Array a2)
{
    Array *arrptr=new Array();
    arrptr->size=a1.size+a2.size;
    arrptr->ptr=new int[arrptr->size];
    int i,j,k;
    for(i=0,k=0;i<a1.size;i++,k++)
    {
        arrptr[k]=a1.ptr[i];
    }
    for(j=0;j<a2.size;j++)
    {
        arrptr[k]=a2.ptr[j];
    }
    return arrptr;
}
int main()
{
    Array a1(4),a2(4);
    a1.InputData();
    a2=a1;
    a2.ShowData();
    cout<<endl;
    return 0;
}