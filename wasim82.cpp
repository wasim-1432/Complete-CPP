#include<iostream>
using namespace std;
class Time
{
    private:
        int hour,min,sec;
    public:
        void SetData(int hour,int min,int sec)
        {
            this->hour=hour;
            this->min=min;
            this->sec=sec;
        }
        void ShowData()
        {
            cout<<hour<<":"<<min<<":"<<sec;
        }
};
int main()
{
    Time t1;
    t1.SetData(12,33,44);
    t1.ShowData();
    cout<<endl;
    return 0;
}