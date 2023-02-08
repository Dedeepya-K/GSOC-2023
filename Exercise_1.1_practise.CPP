#include<iostream>
using namespace std;

class Distance
{
private:
    int feet,inches;
public:
    Distance(){}
    Distance(int f,int i)
    {
        feet = f;
        inches = i;
    }
    void get_dist()
    {
        cout<<"Distance is "<<feet<<" feet "<<inches<<" inches "<<endl;
    }
    void add(Distance&d1,Distance&d2)
    {
        feet = d1.feet + d2.feet;
        inches = d1.inches + d2.inches;
        feet = feet + (inches/12);
        inches = inches %12;
    }
    ~Distance ()
    {
        cout<<"Distance object is destroyed\n";
    }
};
int main()
{
    int f1,in1,f2,in2;
    cout<<"Enter feet : ";
    cin>>f1;
    cout<<"Enter inches : ";
    cin>>in1;
    cout<<"Enter feet : ";
    cin>>f2;
    cout<<"Enter inches : ";
    cin>>in2;

    Distance d1(f1,in1);
    Distance d2(f2,in2);
    Distance d3;
    d3.add(d1,d2);
    d3.get_dist();

    return 0;

}
