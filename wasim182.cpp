#include<iostream>
using namespace std;
class Circle
{
    private:
        int radius;
    public:
        void SetRadius(int radius)
        {
            this->radius=radius;
        }
        int GetRadius()
        {
            return radius;
        }
        float GetArea()
        {
            return 3.14*radius*radius;
        }
};
class ThickCircle:public Circle
{
    private:
        int thickness;
    public:
        int GetThickness()
        {
            return thickness;
        }
        void SetThickness(int thickness)
        {
            this->thickness=thickness;
        }
        float GetArea()
        {
            return Circle::GetArea()-3.14*thickness*thickness;
        }
};
int main()
{
    ThickCircle c1,c2;
    c1.SetRadius(10);
    c1.SetThickness(6);
    c1.GetArea();
    cout<<endl;
    return 0;
}