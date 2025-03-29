#include<iostream>
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
        void ShowData()
        {
            cout<<day<<"/"<<month<<"/"<<year;
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