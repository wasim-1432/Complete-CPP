#include<iostream>
using namespace std;
class Time
{
    private:
        int hour,min,sec;
    public:
        void SetTime(int hour,int min,int sec)
        {
            this->hour=hour;
            this->min=min;
            this->sec=sec;
        }
        void ShowTime()
        {
            cout<<hour<<":"<<min<<":"<<sec;
        }
        void SetHour(int hour)
        {
            this->hour=hour;
        }
        void SetMin(int min)
        {
            this->min=min;
        }
        void SetSec(int sec)
        {
            this->sec=sec;
        }
        int GetHour()
        {
            return hour;
        }
        int GetMin(int min)
        {
            return min;
        }
        int GetSec(int sec)
        {
            return sec;
        }
};
int main()
{
    Time t1;
    t1.SetTime(12,33,44);
    t1.ShowTime();
    cout<<endl;
    return 0;
}