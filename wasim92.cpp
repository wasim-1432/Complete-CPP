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
        void Normalise()
        {
            min=min+sec/60;
            sec=sec%60;
            hour=hour+min/60;
            min=min%60;
            hour=hour%12;
        }
        Time Add(Time T)
        {
            Time temp;
            temp.hour=hour+T.hour;
            temp.min=min+T.min;
            temp.sec=sec+T.sec;
            return temp;
        }
        bool is_Greater(Time T)
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
            else if(sec>T.sec)
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
    Time t1,t2,t3;
    t1.SetTime(13,55,6);
    t2.SetTime(2,6,4);
    t3=t1.Add(t2);
    t3.Normalise();
    t3.ShowTime();
    cout<<endl;
    return 0;
}