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
        friend ostream& operator<<(ostream &,Coordinate);
        friend istream& operator>>(istream &,Coordinate &);
};
ostream& operator<<(ostream &dout,Coordinate X)
{
    dout<<"("<<X.x<<","<<X.y<<")";
}
istream& operator>>(istream &din,Coordinate & X)
{
    din>>X.x>>X.y;
}
int main()
{
    Coordinate c1(2,3),c2(3,4),c3;
    cin>>c3;   //operator,(c1,c2)
    cout<<c3;   //operator(cout,c3)
    cout<<endl;
    return 0;
}