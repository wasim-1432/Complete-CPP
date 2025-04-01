#include<iostream>
using namespace std;
class Fraction
{
    private:
        long numerator;
        long denominator;
    public:
        Fraction(long n=0,long d=0)
        {
            numerator=n;
            denominator=d;
        }
        Fraction operator+(Fraction F)
        {
            Fraction temp;
            temp.numerator=numerator*F.denominator+F.numerator*denominator;
            temp.denominator=denominator*F.denominator;
            return temp;
        }
        bool operator>(Fraction F)
        {
            if(numerator>F.numerator && denominator<F.denominator)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        void ShowData()
        {
            int i=2;
            while(i<=numerator && i<=denominator)
            {
                if(numerator%i==0 && denominator%i==0)
                {
                    numerator=numerator/i;
                    denominator=denominator/i;
                }
                else
                {
                    i++;
                }
            }
            cout<<numerator<<"/"<<denominator<<endl;
        }
};
int main()
{
    Fraction f1(2,3),f2(2,3),f3;
    f3=f1+f2;
    f3.ShowData();
    cout<<endl;
    return 0;
}