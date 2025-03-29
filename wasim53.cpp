#include<iostream>
using namespace std;
float Area_Of_Circle_Rectangle_And_Traingle(int r);
float Area_Of_Circle_Rectangle_And_Traingle(int l,int w);
float Area_Of_Circle_Rectangle_And_Traingle(int b,int h);
int main()
{
    int r,l,w,b,h;
    cout<<"Enter the radius of Circle"<<endl;
    cin>>r;
    cout<<"Area of Circle is="<<Area_Of_Circle_Rectangle_And_Traingle(r);
    cout<<"\nEnter the length and width of reactangle"<<endl;
    cin>>l>>w;
    cout<<"Area of rectangle is="<<Area_Of_Circle_Rectangle_And_Traingle(l,w);
    cout<<"\nEnter the base and height of traingle"<<endl;
    cin>>b>>h;
    cout<<"Area of traingle is="<<Area_Of_Circle_Rectangle_And_Traingle(b,h);
    cout<<endl;
    return 0;
}
float Area_Of_Circle_Rectangle_And_Traingle(int r)
{
    return 3.14*r*r;
}
float Area_Of_Circle_Rectangle_And_Traingle(int l,int w)
{
    return l*w;
}
float Area_Of_Circle_Rectangle_And_Traingle(int b,int h)
{
    return 0.5*b*h;
}