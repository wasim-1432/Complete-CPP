#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,imaginary;
    public:
        void SetData(int real,int imaginary)
        {
            this->real=real;
            this->imaginary=imaginary;
        }
        void ShowData()
        {
            if(imaginary>0)
            {
                cout<<real<<"+"<<imaginary<<"i";
            }
            else
            {
                cout<<real<<imaginary<<"i";
            }
        }
        friend Complex operator-(Complex);
};
Complex operator-(Complex X)
{
    Complex temp;
    temp.real=-X.real;
    temp.imaginary=-X.imaginary;
    return temp;
}
int main()
{
    Complex c1,c3;
    c1.SetData(2,3);
    c3=-c1;
    c3.ShowData();
    cout<<endl;
    return 0;
}