#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    private:
        int roll_no;
        char name[30];
        char mobile[12];
    public:
        Student(int roll_no,char name[],char mobile[])
        {
            this->roll_no=roll_no;
            strcpy(this->name,name);
            strcpy(this->mobile,mobile);
        }
        void ShowData()
        {
            cout<<"Roll No="<<roll_no<<" Name="<<name<<" Mobile="<<mobile;
        }
};
int main()
{
    Student s1(102,"Mohd Wasim","9621521265");
    s1.ShowData();
    cout<<endl;
    return 0;
}