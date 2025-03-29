#include<iostream>
#include<string.h>
using namespace std;
class Book
{
    private:
        int book_id;
        char title[30];
        float price;
    public:
        Book()
        {
            book_id=0;
            strcpy(title,"Mohd Wasim");
            price=239.9;
        }
        Book(int book_id,char title[],float price)
        {
            this->book_id=book_id;
            strcpy(this->title,title);
            this->price=price;
        }
        void ShowData()
        {
            cout<<"Book Id="<<book_id<<" Title="<<title<<" Price="<<price;
        }
};
int main()
{
    Book b1;
    b1.ShowData();
    cout<<endl;
    return 0;
}