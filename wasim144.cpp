#include<iostream>
using namespace std;
class Array
{
    private:
        int *ptr;
        int size;
    public:
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
};
int main()
{
    Array a1(4),a2(4);
    a1.InputData();
    a2=a1;
    a2.ShowData();
    cout<<endl;
    return 0;
}