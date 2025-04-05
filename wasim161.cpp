#include<iostream>
using namespace std;
#include<string.h>
class Person
{
    private:
        char *name;
        int age;
    public:
        Person(char name[],int age)
        {
            strcpy(this->name,name);
            this->age=age;
        }
        void ShowData()
        {
            cout<<"Name="<<name<<" Age="<<age;
        }
};
int main()
{
    Person p1("Mohd Wasim",20);
    p1.ShowData();
    cout<<endl;
    return 0;
}