#include <iostream>
using namespace std;
int main()
{
    int n,arr[100]={0},num[100]={0};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        for(int j=0;j<=i;j++)
        {
            if(arr[i]>arr[j])
            {
                num[i]+=1;
            }
        }
    }
    for(int k=0;k<n;k++)
    {
        cout<<num[k]<<" ";
    }
    return 0;
}