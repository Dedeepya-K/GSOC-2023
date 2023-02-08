#include<iostream>
using namespace std;

class Area
{
public:
    void output(int l, int b)
    {
        cout<<"Area of Rectangle is = "<<l*b<<endl;
    }

    void output(int a)
    {
        cout<<"Area of Square is = "<<a*a<< endl;
    }
};

int main()
{
    int length, breadth, side;
    Area obj;
    obj.output(5,6);
    obj.output(5);
    cout<<"Enter the length of the rectangle : ";
    cin>>length;
    cout<<"Enter the breadth of the rectangle : ";
    cin>>breadth;
    cout<<"Enter the side of the square : ";
    cin>>side;

    obj.output(length, breadth);
    obj.output(side);

    return 0;
}
