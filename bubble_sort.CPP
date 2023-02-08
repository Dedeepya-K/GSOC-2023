#include<iostream>
using namespace std;
int bubble_sort_fun(int arr[],int n);
int main()
{
    int n,arr[100],i;

    cout<<"Enter size of the array : ";
    cin>>n;

    cout<<"Enter the elements of the array : ";
    for(i=0;i<n;i++)
        cin>>arr[i];

    bubble_sort_fun(arr,n);

    cout<<"Elements after sorting are : ";
    for(i=0;i<n;i++)
        cout<<"\t"<<arr[i];

    return 0;
}

int bubble_sort_fun(int arr[],int n)
{
    int pass, j, temp;
    for(pass=0;pass<n;pass++)
    {
        for(j=0;j<n-pass-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
