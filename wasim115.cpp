#include<iostream>
using namespace std;
class Circle
{
    private:
        int radius;
    public:
        Circle(int radius)
        {
            this->radius=radius;
        }
        Circle()
        {
            this->radius=9;
        }
        void ShowData()
        {
            cout<<"Radius is="<<radius;
        }
};
int main()
{
    Circle c1(3);
    c1.ShowData();
    cout<<endl;
    return 0;
}