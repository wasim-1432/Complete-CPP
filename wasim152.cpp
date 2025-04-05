#include<iostream>
using namespace std;
class Integer
{
    private:
        int a;
    public:
        Integer(int a)
        {
            this->a=a;
        }
        friend bool operator!(Integer);
        friend bool operator==(Integer,Integer);
};
bool operator!(Integer I)
{
    return !(I.a);
}
bool operator==(Integer I1,Integer I2)
{
    if(I1.a==I2.a)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    Integer I(2),I1(2);
    I==I1; 
    cout<<endl;
    return 0;
}