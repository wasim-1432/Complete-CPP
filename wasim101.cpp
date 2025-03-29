#include<iostream>
using namespace std;
class Cuboid
{
    private:
        int length,breadth,height;
    public:
        Cuboid(int length,int breadth,int height)
        {
            this->length=length;
            this->breadth=breadth;
            this->height=height;
        }
        void ShowData()
        {
            cout<<"Length="<<length<<" Breadth="<<breadth<<" Height="<<height;
        }
};
int main()
{
    Cuboid c1(1,2,3);
    c1.ShowData();
    cout<<endl;
    return 0;
}