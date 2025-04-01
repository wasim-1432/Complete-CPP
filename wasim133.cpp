#include<iostream>
using namespace std;
class Distance
{
    private:
        int km,m,cm;
    public:
        Distance(int km=0,int m=0,int cm=0)
        {
            this->km=km;
            this->m=m;
            this->cm=cm;
        }
        void ShowData()
        {
            cout<<"KM="<<km<<" M="<<m<<" CM="<<cm;
        }
        Distance operator+(Distance D)
        {
            Distance result;
            result.km=this->km+D.km;
            result.m=this->m+D.m;
            result.cm=this->cm+D.cm;
            return result;
        }
};
int main()
{
    Distance d1(1,2,3),d2(2,3,4),d3;
    d3=d1+d2;
    d3.ShowData();
    cout<<endl;
    return 0;
}