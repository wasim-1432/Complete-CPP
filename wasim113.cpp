#include<iostream>
using namespace std;
class Date
{
    private:
        int date,month,year;
    public:
        Date():date(12),month(2),year(2022)
        {}
        Date(int date,int month,int year):date(date),month(month),year(year)
        {}
        void ShowData()
        {
            cout<<date<<"/"<<month<<"/"<<year;
        }
};
int main()
{
    Date d1(12,2,2025);
    d1.ShowData();
    cout<<endl;
    return 0;
}