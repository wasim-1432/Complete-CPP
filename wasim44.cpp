#include<iostream>
using namespace std;
int Print_Pascals_Triangle(int n);
int Factorial(int n);
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    Print_Pascals_Triangle(n);
    cout<<endl;
    return 0;
}
int Print_Pascals_Triangle(int n)
{
    int i,j,k,t;
    for(i=1;i<=n;i++)
    {
        k=1;
        t=0;
        for(j=1;j<=2*n;j++)
        {
            if(j>=n+1-i && j<=n-1+i && k)
            {
                cout<<Factorial(i-1)/Factorial(i-1-t)/Factorial(t);
                k=0;
                t++;
            }
            else
            {
                cout<<" ";
                k=1;
            }
        }
        cout<<endl;
    }
}
int Factorial(int n)
{
    int s=1;
    while(n)
    {
        s=s*n;
        n--;
    }
    return s;
}