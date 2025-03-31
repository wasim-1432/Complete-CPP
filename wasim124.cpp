#include<iostream>
using namespace std;
class Time
{
    private:
        int hour,min,second;
    public:
        Time()
        {
            hour=0;
            min=0;
            second=0;
        }
        Time(int hour,int min,int second)
        {
            this->hour=hour;
            this->min=min;
            this->second=second;
        }
        bool operator >(Time T)
        {
            if(hour>T.hour)
            {
                return true;
            }
            else if(hour<T.hour)
            {
                return false;
            }
            else if(min>T.min)
            {
                return true;
            }
            else if(min<T.min)
            {
                return false;
            }
            else if(second>T.second)
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
            cout<<hour<<":"<<min<<":"<<second;
        }
        Time operator++()        //PreIncrement
        {
            second=second+1;
            min=min+second/60;
            second=second%60;
            hour=hour+min/60;
            min=min%60;
            hour=hour%12;
            return *this;
        }
        Time operator++(int)        //PostIncrement
        {
            Time temp=*this;
            second=second+1;
            min=min+second/60;
            second=second%60;
            hour=hour+min/60;
            min=min%60;
            hour=hour%12;
            return temp;
        }
        Time operator+(Time T)
        {
            Time temp;
            temp.hour=hour+T.hour;
            temp.min=min+T.min;
            temp.second=second+T.second;
            return temp;
        }
};
int main()
{
    Time t1(12,33,44),t2(2,4,5),t3;
    t3=t1+t2;
    t3.ShowData();
    cout<<endl;
    return 0;
}