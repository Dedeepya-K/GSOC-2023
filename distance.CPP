#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int x1,y1,x2,y2,x,y,s;

    cout<<"Enter coordinates of first point : ";
    cin>>x1>>y1;
    cout<<"Enter coordinates of second point : ";
    cin>>x2>>y2;

    x = (x2-x1)*(x2-x1);
    y = (y2-y1)*(y2-y1);

    s = sqrt(x+y);

    cout<<"Distance between given points is : "<<s;

}
