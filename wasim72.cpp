#include<iostream>
using namespace std;
int Volume(int l,int w,int h)
{
    return l*w*h;
}
float Volume(int r,int h)
{
    return 3.14*r*r*h/3;
}
float Volume(int r)
{
    return 4*3.14*r*r*r/3;
}
int main()
{
    int l,w,h;
    cout<<"Enter the length,width and height"<<endl;
    cin>>l>>w>>h;
    cout<<"Volume of cuboid is="<<Volume(l,w,h);
    int r;
    cout<<"\nEnter the radius and height of cone"<<endl;
    cin>>r>>h;
    cout<<"Volume of Cone="<<Volume(r,h);
    cout<<"\nEnter the radius of the sphare"<<endl;
    cin>>r;
    cout<<"Volume of sphare is="<<Volume(r);
    cout<<endl;
    return 0;
}