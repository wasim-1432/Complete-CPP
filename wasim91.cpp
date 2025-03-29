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
            if(imaginary>=0)
            {
                cout<<real<<"+"<<imaginary<<"i";
            }
            else
            {
                cout<<real<<imaginary<<"i";
            }
        }
        Complex Add(Complex C)
        {
            Complex temp;
            temp.real=real+C.real;
            temp.imaginary=imaginary+C.imaginary;
            return temp;
        }
        Complex Sub(Complex C)
        {
            Complex temp;
            temp.real=real-C.real;
            temp.imaginary=imaginary-C.imaginary;
            return temp;
        }
        Complex Multiply(Complex C)
        {
            Complex temp;
            temp.real=real*C.real-imaginary*C.imaginary;
            temp.imaginary=imaginary*C.real+real*C.imaginary;
            return temp;
        }
};
int main()
{
    Complex c1,c2,c3;
    c1.SetData(2,3);
    c2.SetData(2,3);
    c3=c1.Multiply(c2);
    c3.ShowData();
    cout<<endl;
    return 0;
}
