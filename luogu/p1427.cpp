#include <iostream>
using namespace std;
int main()
{
    int arr[100]={0},n=0;
    for(int i=0;i<100;i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
        {
            n=i;
            break;
        }
    }
    for(int j=n-1;j>=0;j--)
    {
        cout<<arr[j]<<" ";
    }
}