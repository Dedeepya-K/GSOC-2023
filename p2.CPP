#include<iostream>
#include<conio.h>

using namespace std;

class A
{
private:
    int x;
public:
    A(){x=0;}
    friend void show();
};
void show()
{
    int x;
    cout<<"x = "<<x;
}


int main()
{
    A a;
    show();
    return 0;
}
