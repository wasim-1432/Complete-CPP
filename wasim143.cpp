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
        Time operator=(Time T)
        {
            hour=T.hour;
            min=T.min;
            sec=T.sec;
        }
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
    Time t1,t2(12,3,44);
    t1=t2;    //operator(t2)
    cout<<t1;
    cout<<endl;
    return 0;
}