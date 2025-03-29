#include<iostream>
#include<string.h>
using namespace std;
class Customer
{
    private:
        int cust_id;
        char name[30];
        char email[30];
        char mobile[12];
    public:
        Customer()
        {
            cust_id=0;
            strcpy(name,"Mohd Wasim");
            strcpy(email,"wasim.ahamd0661@gmail.com");
            strcpy(mobile,"9621521265");
        }
        Customer(int cust_id,char name[],char email[],char mobile[])
        {
            this->cust_id=cust_id;
            strcpy(this->name,name);
            strcpy(this->email,email);
            strcpy(this->mobile,mobile);
        }
        void ShowData()
        {
            cout<<"Customer Is="<<cust_id<<" Name="<<name<<" Email="<<email<<" Mobile="<<mobile;
        }
};
int main()
{
    Customer c1;
    c1.ShowData();
    cout<<endl;
    return 0;
}