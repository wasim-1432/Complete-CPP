#include<iostream>
using namespace std;
class Matrix
{
    private:
        int M[3][3];
    public:
        void SetData()
        {
            cout<<"Enter the matrix elements"<<endl;
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                {
                    cin>>M[i][j];
                }
            }
        }
        Matrix operator+(Matrix M1)
        {
            Matrix result;
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                {
                    result.M[i][j]=M[i][j]+M1.M[i][j];
                }
            }
            return result;
        }
        Matrix operator-(Matrix M1)
        {
            Matrix result;
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                {
                    result.M[i][j]=M[i][j]-M1.M[i][j];
                }
            }
            return result;
        }
        Matrix operator*(Matrix M1)
        {
            Matrix result;
            int sum,k;
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                {
                    sum=0;
                    for(k=0;k<=2;k++)
                    {
                        sum=sum+M[i][k]*M1.M[k][j];
                    }
                    result.M[i][j]=sum;
                }
            }
            return result;
        }
        void ShowData()
        {
            cout<<endl<<"Required Matrix is:"<<endl;
            for(int i=0;i<=2;i++)
            {
                for(int j=0;j<=2;j++)
                {
                    cout<<M[i][j]<<" ";
                }
                cout<<endl;
            }
        }
};
int main()
{
    Matrix m1,m2,m3;
    m1.SetData();
    m2.SetData();
    m3=m1*m2;
    m3.ShowData();
    cout<<endl;
    return 0;
}