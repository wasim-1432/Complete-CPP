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
        Distance operator--()     //PreDecrement operator
        {
            if(cm==0)
            {
                cm=cm+100;
                cm=cm-1;
                if(m==0)
                {
                    m=m+1000;
                    m=m-1;
                }
                else
                {
                    m=m-1;
                }
            }
            else
            {
                cm=cm-1;
            }
        }
        Distance operator--(int)     //PostDecrement operator
        {
            Distance temp=*this;
            if(km==0 && m==0 && cm==0)
            {
                cout<<"Invalid Distance";
            }
            else
            {
                if(cm==0)
                {
                    cm=100;
                    if(m==0)
                    {
                        m=1000;
                        km--;
                    }
                    else
                    {
                        m=m;
                    }
                }
                else
                {
                    cm--;
                } 
            }
        }
};
int main()
{
    Distance d1(1,2,2),d2(2,3,4),d3;
    d1--;
    d1.ShowData();
    cout<<endl;
    return 0;
}