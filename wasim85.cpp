#include<iostream>
using namespace std;
class Circle
{
    private:
        int Radius;
    public:
        void SetRadius(int Radius)
        {
            this->Radius=Radius;
        }
        int GetRadius()
        {
            return Radius;
        }
        float Area()
        {
            return 3.14*Radius*Radius;
        }
        float Circumference()
        {
            return 2*3.14*Radius;
        }
        void ShowData()
        {
            cout<<"Area="<<Area();
            cout<<endl<<"Circumference="<<Circumference();
        }
};
int main()
{
    Circle c1;
    c1.SetRadius(3);
    c1.Area();
    c1.Circumference();
    c1.ShowData();
    cout<<endl;
    return 0;
}