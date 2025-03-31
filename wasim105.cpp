#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,imaginary;
    public:
        Complex(int real,int imaginary)
        {
            this->real=real;
            this->imaginary=imaginary;
        }
        void ShowData()
        {
            if(imaginary>0)
            {
                cout<<real<<"+"<<imaginary<<"i"<<endl;
            }
            else
            {
                cout<<real<<imaginary<<"i"<<endl;
            }
        }
};
int main()
{
    Complex c[5]={Complex(2,3),Complex(3,4),Complex(4,5),Complex(5,6),Complex(6,7)};
    for(int i=0;i<5;i++)
    {
        c[i].ShowData();
    }
    cout<<endl;
    return 0;
}