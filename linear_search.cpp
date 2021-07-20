#include<iostream>
using namespace std;
int main()
{
    int n,k,i,j=0;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the array : ";
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key element : ";
    cin>>k;
    for(i=0;i<n;i++)
    {
        if(k==arr[i])
        {
            cout<<"Element found";
            j=1;
            break;
        }
    }
    if(j==0)
    {
        cout<<"Element not found";
    }
    return 0;
}