#include <iostream>
using namespace std;
const int N=1e5+10;
int arr[N];
int n;
void quick_sort(int arr[],int l,int r)
{
    if(l>=r) return;
    int x=arr[l+r >>1],i=l-1,j=r+1;
    while (i<j)
    {
        do i++;while(arr[i]<x);
        do j--;while(arr[j]>x);
        if(i<j) swap(arr[i],arr[j]);
    }
    quick_sort(arr,l,j),quick_sort(arr,j+1,r);
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    quick_sort(arr,0,n-1);
    for(int j=0;j<n;j++) cout<<arr[j]<<" ";
    return 0;
}