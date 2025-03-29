#include<iostream>
using namespace std;
class Matrix
{
    private:
        int M[3][3];
    public:
        void Input()
        {
            int i,j;
            cout<<"Enter the elements of the matrix"<<endl;
            for(i=0;i<=2;i++)
            {
                for(j=0;j<=2;j++)
                {
                    cin>>M[i][j];
                }
            }
        }
        void ShowMAtrix()
        {
            int i,j;
            cout<<"Required Matrix is: "<<endl;
            for(i=0;i<=2;i++)
            {
                for(j=0;j<=2;j++)
                {
                    cout<<M[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        Matrix Add(Matrix M1)
        {
            int i,j;
            Matrix result;
            for(i=0;i<=2;i++)
            {
                for(j=0;j<=2;j++)
                {
                    result.M[i][j]=this->M[i][j]+M1.M[i][j];
                }
            }
            return result;
        }
        Matrix Sub(Matrix M1)
        {
            int i,j;
            Matrix result;
            for(i=0;i<=2;i++)
            {
                for(j=0;j<=2;j++)
                {
                    result.M[i][j]=this->M[i][j]-M1.M[i][j];
                }
            }
            return result;
        }
        Matrix Multiply(Matrix M1)
        {
            int i,j,k,sum;
            Matrix result;
            for(i=0;i<=2;i++)
            {
                for(j=0;j<=2;j++)
                {
                    for(k=0,sum=0;k<=2;k++)
                    {
                        sum=sum+M[i][k]*M1.M[k][j];
                    }
                    result.M[i][j]=sum;
                }
            }
            return result;
        }
        Matrix Transpose()
        {
            int i,j;
            Matrix result;
            for(i=0;i<=2;i++)
            {
                for(j=0;j<=2;j++)
                {
                    result.M[i][j]=this->M[j][i];
                }
            }
            return result;
        }
        bool is_Singular()
        {
            return M[0][0]*(M[1][1]*M[2][2]-M[2][1]*M[1][2])-M[0][1]*(M[1][0]*M[2][2]-M[2][0]*M[1][2])+M[0][2]*(M[1][0]*M[2][1]-M[2][0]*M[1][1]);
        }
};
int main()
{
    Matrix m1,m2,m3;
    m1.Input();
    //m2.Input();
    m3=m1.Transpose();
    m3.ShowMAtrix();
    cout<<endl;
    return 0;
}