#include<iostream>
using namespace std;
class Time
{
    private:
        int hour,min,second;
    public:
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
};
int main()
{
    Time t1(12,33,44),t2(2,4,5);
    t1>t2;
    t1.ShowData();
    cout<<endl;
    return 0;
}