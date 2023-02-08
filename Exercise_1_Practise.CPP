/*
#include<iostream>
#include<math.h>

using namespace std;

class Distance
{
private:
    float feet,inch;
public:
    Distance()
    {
        feet = 0.0;
        inch = 0.0;
    }
    void read_dist();
    void display_dist();
    void add(Distance,Distance);
};
void Distance::read_dist()
{
    cout<<"Enter distance (feet and inches)";
    cin>>feet>>inch;
}
void Distance::display_dist()
{
    cout<<"Distance :  "<<feet<<" feet "<<inch<<" inches "<<endl;
}
void Distance::add(Distance x, Distance y)
{
    inch = x.inch+y.inch;
    feet = x.feet+y.feet;
    if (inch>=12.0)
    {
        feet = x.feet + y.feet + (inch/12.0);
        inch = (int)inch%12;
    }
}
int main()
{

    Distance d1,d2,d3,d4,d5;
    cout<<"Enter first measure :\n";
    d1.read_dist();
    cout<<"Enter second distance :\n";
    d2.read_dist();
    d3.add(d1,d2);
    d3.display_dist();


}
*/

















/*





#include<iostream>
#include<math.h>

using namespace std;

class Distance
{
private:
    float feet,inch;
public:
    Distance()
    {
        feet = 0.0;
        inch = 0.0;
    }
    void read_dist();
    void display_dist();
    void add(Distance, Distance);
};
void Distance :: read_dist()
{
    cout<<"Enter Distance (in feet and inches) : ";
    cin>>feet>>inch;
}
void Distance :: display_dist()
{
    cout<<"Distance : "<<feet<<" feet "<<inch<<" inches "<<endl;
}
void Distance:: add(Distance x, Distance y)
{
    inch = x.inch + y.inch;
    feet = x.feet + y.feet;
    if(inch>=12)
    {
        feet = x.feet + y.feet + (inch/12.0);
        inch = (int)inch % 12;
    }
}

int main()
{
    Distance d1,d2,d3;
    cout<<"Enter first measure : ";
    d1.read_dist();
    cout<<"Enter second measure : ";
    d2.read_dist();
    d3.add(d1,d2);
    d3.display_dist();
}
*/
#include<iostream>
#include<math.h>

using namespace std;

class Distance
{
private:
    float feet,inch;
public:
    Distance()
    {
        feet = 0.0;
        inch = 0.0;
    }
    void read_dist();
    void display_dist();
    void add(Distance,Distance);
};
void Distance :: read_dist()
{
    cout<<"Enter distance (feet , inches)";
    cin>>feet>>inch;
}
void Distance :: display_dist()
{
    cout<<"Total Distance is  "<<feet<<" feet "<<inch<<" inch "<<endl;
}
void Distance :: add(Distance x, Distance y)
{

    inch = x.inch + y.inch;
    feet = x.feet + y.feet;
    if (inch>=12.0)
    {
        feet = x.feet +y.feet +(inch/12);
        inch =(int)inch%12;
    }
}

int main()
{
    Distance d1,d2,d3;
    cout<<"\nEnter first measure : ";
    d1.read_dist();
    cout<<"\n Enter second measure : ";
    d2.read_dist();
    d3.add(d1,d2);
    d3.display_dist();
}























