#include<iostream>
#include<string.h>
using namespace std;
class Room
{
    private:
        int room_number;
        char room_type[20];
        bool is_AC;
        float price;
    public:
        Room(int room_number,char room_type[],bool is_AC,float price)
        {
            this->room_number=room_number;
            strcpy(this->room_type,room_type);
            this->is_AC=is_AC;
            this->price=price;
        }
        void ShowData()
        {
            cout<<"Room Number="<<room_number<<" Room Type="<<room_type<<" Is_AC="<<is_AC<<" Price="<<price;
        }
};
int main()
{
    Room r1(2,"Single",true,2000);
    r1.ShowData();
    cout<<endl;
    return 0;
}