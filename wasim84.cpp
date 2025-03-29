#include<iostream>
#include<string.h>
using namespace std;
class Date
{
    private:
        int day,month,year;
    public:
        void SetData(int day,int month,int year)
        {
            this->day=day;
            this->month=month;
            this->year=year;
        }
        char *getMonth(int m)
        {
            if(m==1)
            {
                return "Jan";
            }
            else if(m==2)
            {
                return "Feb";
            }
            else if(m==3)
            {
                return "March";
            }
            else if(m==4)
            {
                return "April";
            }
            else if(m==5)
            {
                return "May";
            }
            else if(m==6)
            {
                return "June";
            }
            else if(m==7)
            {
                return "July";
            }
            else if(m==8)
            {
                return "Aug";
            }
            else if(m==9)
            {
                return "Sept";
            }
            else if(m==10)
            {
                return "Oct";
            }
            else if(m==11)
            {
                return "Nov";
            }
            else if(m==12)
            {
                return "Dec";
            }
        }
        void ShowData()
        {
            cout<<day<<"-"<<month<<"-"<<year<<endl;
            cout<<day<<"-"<<getMonth(month)<<"-"<<year;
        }
};
int main()
{
    Date d1;
    d1.SetData(12,2,2025);
    d1.ShowData();
    cout<<endl;
    return 0;
}