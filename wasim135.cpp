#include<iostream>
using namespace std;
class Array
{
    private:
        int size;
        int *ptr;
    public:
        Array()
        {
            ptr=new int[size];
        }
        Array(int size)
        {
            this->size=size;
            ptr=new int[size];
        }
        void Input()
        {
            cout<<"Enter the elements"<<endl;
            for(int i=0;i<size;i++)
            {
                cin>>ptr[i];
            }
        }
        int operator[](int a)
        {
            cout<<"Required data="<<ptr[a];
        }
        ~Array()
        {
            delete []ptr;
        }
};
int main()
{
    Array a1(5);
    a1.Input();
    a1[2];
    cout<<endl;
    return 0;
}