#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,imaginary;
    public:
        Complex()
        {
            real=0;
            imaginary=0;
        }
        Complex(int real,int imaginary)
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
        Complex operator + (Complex C)
        {
            Complex temp;
            temp.real=real+C.real;
            temp.imaginary=imaginary+C.imaginary;
            return temp;
        }
        Complex operator - (Complex C)
        {
            Complex temp;
            temp.real=real-C.real;
            temp.imaginary=imaginary-C.imaginary;
            return temp;
        }
        Complex operator * (Complex C)
        {
            Complex temp;
            temp.real=real*C.real-imaginary*C.imaginary;
            temp.imaginary=real*C.imaginary+imaginary*C.real;
            return temp;
        }
        bool operator == (Complex C)
        {
            if(real==C.real && imaginary==C.imaginary)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};
int main()
{
    Complex c1(2,3),c2(3,4),c3;
    c3=c1*c2;
    c3.ShowData();
    cout<<endl;
    return 0;
}