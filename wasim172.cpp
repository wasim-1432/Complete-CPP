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
            cout<<hour<<":"<<min<<":"<<sec<<endl;
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
        Time *GetTimeArray(int size)
        {
            return new Time[size];
        }
};
int main()
{
    Time *timeArray=new Time[3];
    timeArray[0].SetTime(12,3,44);
    timeArray[1].SetTime(1,3,44);
    timeArray[2].SetTime(12,55,44);
    for(int i=0;i<3;i++)
    {
        timeArray[i].ShowTime();
    }
    cout<<endl;
    return 0;
}