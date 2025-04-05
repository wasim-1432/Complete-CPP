#include<iostream>
#include<math.h>
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
        float GetDistance()
        {
            return sqrt(x*x+y*y);
        }
        float GetDistance(Coordinate C)
        {
            return sqrt((x-C.x)*(x-C.x)+(y-C.y)*(y-C.y));
        }
};
int main()
{
    Coordinate c1(2,3),c2(3,4);
    c1.GetDistance(c2);
    cout<<endl;
    return 0;
}