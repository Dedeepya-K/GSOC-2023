#include<iostream>
#include<conio.h>

using namespace std;

class A
{
private:
    int x;
public:
    A(){x=0;}
    friend class B;
};

class B
{
private:
    int y;
public:
    B(){y=1;}
    void show(A obj)
    {
        cout<<"A::x = "<<obj.x;
        cout<<"\ny = "<<y;
    }
};

int main()
{
    A a;
    B b;
    b.show(a);

    return 0;
}
