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
        void Sort(Time t[],int size)
        {
            int round,i;
            for(round=1;round<=size-2;round++)
            {
                for(i=0;i<=size-round-1;i++)
                {
                    if(t[i].hour>t[i+1].hour  || t[i].min>t[i+1].min || t[i].sec>t[i+1].sec)
                    {
                        Time temp;
                        temp=t[i];
                        t[i]=t[i+1];
                        t[i+1]=temp;
                    }
                }
            }
            for(i=0;i<size;i++)
            {
                t[i].ShowTime();
            }
        }
};
int main()
{
    Time *timeArray=new Time[3];
    timeArray[0].SetTime(12,3,44);
    timeArray[1].SetTime(1,3,44);
    timeArray[2].SetTime(12,55,44);
    timeArray->Sort(timeArray,3);
    cout<<endl;
    return 0;
}