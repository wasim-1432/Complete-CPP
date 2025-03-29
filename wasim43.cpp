#include<iostream>
using namespace std;
int X_Raise_To_The_Power_Y(int x,int y);
int main()
{
    int x,y;
    cout<<"Enter the value of x and y"<<endl;
    cin>>x>>y;
    cout<<"Required Answer is="<<X_Raise_To_The_Power_Y(x,y);
    cout<<endl;
    return 0;
}
int X_Raise_To_The_Power_Y(int x,int y)
{
    int s=1;
    while(y)
    {
        s=s*x;
        y--;
    }
    return s;
}