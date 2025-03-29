#include<iostream>
using namespace std;
int Add_2_Or_3_Numbers_Using_Default_Argument(int a,int b,int c=0);
int main()
{
    int a,b,c;
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
    cout<<"Sum is="<<Add_2_Or_3_Numbers_Using_Default_Argument(a,b);
    cout<<"\nEnter any three numbers"<<endl;
    cin>>a>>b>>c;
    cout<<"Sum is="<<Add_2_Or_3_Numbers_Using_Default_Argument(a,b,c);
    cout<<endl;
    return 0;
}
int Add_2_Or_3_Numbers_Using_Default_Argument(int a,int b,int c)
{
    return a+b+c;
}