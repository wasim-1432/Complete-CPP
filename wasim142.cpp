#include<iostream>
using namespace std;
class Time
{
    private:
        int hour,min,sec;
    public:
        Time(int hour=0,int min=0,int sec=0)
        {
            this->hour=hour;
            this->min=min;
            this->sec=sec;
        }
        friend ostream& operator<<(ostream &,Time);
        friend istream& operator>>(istream &,Time &);
};
ostream& operator<<(ostream &dout,Time T)
{
    dout<<T.hour<<":"<<T.min<<":"<<T.sec;
}
istream& operator>>(istream &din,Time &T)
{
    cout<<"Enter the value of hour,min and sec"<<endl;
    din>>T.hour>>T.min>>T.sec;
}
int main()
{
    Time t1(12,34,34),t2;
    cin>>t2;
    cout<<t2;
    cout<<endl;
    return 0;
}