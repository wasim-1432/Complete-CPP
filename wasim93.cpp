#include<iostream>
using namespace std;
class TestResult
{
    private:
        int roll_no,right,wrong,net_score;
        static int rigth_weightage,Wrong_Weightage;
    public:
        void SetRoll_Number(int roll_no)
        {
            this->roll_no=roll_no;
        }
        int Get_Roll_Number()
        {
            return roll_no;
        }
        void Set_Right(int right)
        {
            this->right=right;
        }
        int Get_Right()
        {
            return right;
        }
        void Set_Wrong(int wrong)
        {
            this->wrong=wrong;
        }
        int Get_Wrong()
        {
            return wrong;
        }
        void Set_NetScore(int net_score)
        {
            this->net_score=net_score;
        }
        int Get_NetScore()
        {
            return net_score;
        }
        static void Set_Right_Weightage(int rw)
        {
            rigth_weightage=rw;
        }
        static int Get_Right_Weightage()
        {
            return rigth_weightage;
        }
        static void Set_Wrong_Weightage(int ww)
        {
            Wrong_Weightage=ww;
        }
        static int Get_Wrong_Weightage()
        {
            return Wrong_Weightage;
        }
};
void SetValues(TestResult &t,int roll,int r,int w)
{
    t.SetRoll_Number(roll);
    t.Set_Right(r);
    t.Set_Wrong(w);
    t.Set_NetScore(t.Get_Right()*TestResult::Get_Right_Weightage()-t.Get_Wrong()*TestResult::Get_Wrong_Weightage());
}
void Sort_By_NetScore(TestResult tr[],int size)
{
    int round,i;
    TestResult temp;
    for(round=1;round<=size-1;round++)
    {
        for(i=0;i<=size-round-1;i++)
        {
            if(tr[i].Get_NetScore()>tr[i+1].Get_NetScore())
            {
                temp=tr[i];
                tr[i]=tr[i+1];
                tr[i+1]=temp;
            }
        }
    }
}
void ShowTestResult(TestResult tr[],int size)
{
    cout<<"Roll number Right Wrong NetScore"<<endl;
    int i;
    for(i=0;i<=size-1;i++)
    {
        cout<<endl;
        cout<<tr[i].Get_Roll_Number()<<" ";
        cout<<tr[i].Get_Right()<<" ";
        cout<<tr[i].Get_Wrong()<<" ";
        cout<<tr[i].Get_NetScore();
    }
}
int main()
{
    TestResult::Set_Right_Weightage(5);
    TestResult::Set_Wrong_Weightage(-2);
    TestResult tr[5];
    SetValues(tr[0],100,10,2);
    SetValues(tr[1],90,9,3);
    SetValues(tr[2],95,15,3);
    SetValues(tr[3],88,10,4);
    SetValues(tr[4],67,5,2);
    Sort_By_NetScore(tr,5);
    ShowTestResult(tr,5);
    cout<<endl;
    return 0;
}