#include<iostream>
using namespace std;
class Number
{
    private:
        int size;
        int *arr;
    public:
        Number(int size)
        {
            this->size=size;
            arr=new int[size];
        }
        void InputData()
        {
            cout<<"Enter the elements of the array"<<endl;
            for(int i=0;i<size;i++)
            {
                cin>>arr[i];
            }
        }
        ~Number()
        {
            delete []arr;
        }
        Number(Number &n)
        {
            size=n.size;
            for(int i=0;i<size;i++)
            {
                arr[i]=n.arr[i];
            }
        }
        void ShowData()
        {
            for(int i=0;i<size;i++)
            {
                cout<<arr[i]<<" ";
            }
        }
};
int main()
{
    Number c1(5);
    c1.InputData();
    c1.ShowData();
    cout<<endl;
    return 0;
}