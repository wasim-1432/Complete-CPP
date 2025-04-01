#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,imaginary;
    public:
        Complex(int real=0,int imaginary=0)
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
        friend Complex operator+(Complex,Complex);
        friend Complex operator-(Complex,Complex);
        friend Complex operator*(Complex,Complex);
};
Complex operator+(Complex X,Complex Y)
{
    Complex temp;
    temp.real=X.real+Y.real;
    temp.imaginary=X.imaginary+Y.imaginary;
    return temp;
}
Complex operator-(Complex X,Complex Y)
{
    Complex temp;
    temp.real=X.real-Y.imaginary;
    temp.imaginary=X.imaginary-Y.imaginary;
    return temp;
}
Complex operator*(Complex X,Complex Y)
{
    Complex temp;
    temp.real=X.real*Y.real-X.imaginary*Y.imaginary;
    temp.imaginary=X.real*Y.imaginary+X.imaginary*Y.real;
    return temp;
}
int main()
{
    Complex c1(1,2),c2(2,3);
    c1=c1*c2;
    c1.ShowData();
    cout<<endl;
    return 0;
}