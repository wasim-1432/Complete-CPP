#include<iostream>
#include<string.h>
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
class Shape
{
    private:
        char shapeName[30];
    public:
        void SetShapeName(char shapeName[])
        {
            strcpy(this->shapeName,shapeName);
        }
        char *GetShapeName()
        {
            return shapeName;
        }
};
class Straight:public Shape
{
    private:
        Coordinate c1,c2;
    public:
        void SetLine(Coordinate c1,Coordinate c2)
        {
            this->c1=c1;
            this->c2=c2;
        }
        void GetDistance(Coordinate c1,Coordinate c2)
        {
            cout<<c1.GetDistance(c2);
        }
        void ShowLine()
        {
            c1.ShowData();
            c2.ShowData();
        }
};
int main()
{
    Straight s1;
    Coordinate c1(2,3),c2(3,4);
    s1.GetDistance(c1,c2);
    s1.ShowLine();
    cout<<endl;
    return 0;
}