#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    private:
        char name[50];
        int age;
    protected:
        void SetName(char name[])
        {
            strcpy(this->name,name);
        }
        void SetAge(int age)
        {
            this->age=age;
        }
        char *GetName()
        {
            return name;
        }
        int GetAge()
        {
            return age;
        }
};
class Employee:public Person
{
    private:
        float salary;
    public:
        void SetEmployee(char name[],int age,float salary)
        {
            SetName(name);
            SetAge(age);
            this->salary=salary;
        }
        void ShowEmployee()
        {
            cout<<"Name="<<GetName()<<" Age="<<GetAge()<<" Salary="<<salary;
        }
};
int main()
{
    Employee e1;
    e1.SetEmployee("Mohd Wasim",20,2000.8);
    e1.ShowEmployee();
    cout<<endl;
    return 0;
}