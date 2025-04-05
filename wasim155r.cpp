#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    private:
        int roll_no;
        char name[30];
        int age;
    public:
        void SetStudent(int roll_no,char name[],int age)
        {
            this->roll_no=roll_no;
            strcpy(this->name,name);
            this->age=age;
        }
        void ShowData()
        {
            cout<<"Roll No="<<roll_no<<" Name="<<name<<" Age="<<age;
        }
        friend bool operator==(Student,Student);
};
bool operator==(Student s1,Student s2)
{
    if(s1.roll_no==s2.roll_no && s1.name==s2.name && s1.age==s2.age)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    cout<<endl;
    return 0;
}