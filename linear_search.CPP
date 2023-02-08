#include<iostream>
using namespace std;
int main()
{
    int n,i,arr[50],key;

    cout<<"Enter the size of the array : ";
    cin>>n;

    cout<<"Enter the elements of the array : ";
    for(i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Enter the search element : ";
    cin>>key;

    for(i=0;i<n;i++)
    {
    if(key == arr[i])
    {
        cout<<"\nElement found at position : "<<i+1;
        break;
    }
    }
    if(key != arr[i] )
    {
        cout<<"\nElement not found.";
    }

}
