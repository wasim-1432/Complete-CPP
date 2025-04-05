#include<iostream>
using namespace std;
class Coordinate
{
    private:
        int x,y;
    public:
        Coordinate()
        {
            x=0;
            y=0;
        }
        Coordinate(int x,int y)
        {
            this->x=x;
            this->y=y;
        }
        void ShowData()
        {
            cout<<"("<<x<<","<<y<<")";
        }
        Coordinate operator,(Coordinate C)
        {
            return C;
        }
};
int main()
{
    Coordinate c1(2,3),c2(3,4),c3;
    c3=(c1,c2);   //operator,(c1,c2)
    c3.ShowData();
    cout<<endl;
    return 0;
}