#include<iostream>
#include<string.h>
using namespace std;
class String
{
    private:
        char *ptr;
        int length;
    public:
        String(int l)
        {
            length=l;
            ptr=(char*)malloc(l*sizeof(int));
        }
        void Input()
        {
            fgets(ptr,length,stdin);
            ptr[strlen(ptr)-1]='\0';
        }
        void ShowData()
        {
            cout<<ptr;
        }
        void UpperCase()
        {
            for(int i=0;ptr[i];i++)
            {
                if(ptr[i]>='a' && ptr[i]<='z')
                {
                    ptr[i]=ptr[i]-32;
                }
            }
        }
        void LowerCase()
        {
            for(int i=0;ptr[i];i++)
            {
                if(ptr[i]>='A' && ptr[i]<='Z')
                {
                    ptr[i]=ptr[i]+32;
                }
            }
        }
        int GetLength()
        {
            return length;
        }
        char *GetString()
        {
            return ptr;
        }
};
int main()
{
    String s(50);
    s.Input();
    //s.UpperCase();
    s.LowerCase();
    s.ShowData();
    cout<<endl;
    return 0;
}