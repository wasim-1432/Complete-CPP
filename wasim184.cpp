#include<iostream>
#include<string.h>
using namespace std;
class Shape
{
    private:
        char shapeName[30];
    public:
        void SetShapeName(char shapeName[])
        {
            strcpy(this->shapeName,shapeName);
        }
        char *GetShapeName()
        {
            return shapeName;
        }
};