#include <iostream>
using namespace std;
int main()
{
    int m,n,hurt[3005]={0};long long mn=30000000;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>hurt[i];
    }
    for(int j=0;j<=n-m;j++)
    {
        int sum=0;
        for(int k=j;k<j+m;k++)
        {
            sum+=hurt[k];
        }
        if (sum<=mn)
        {
            mn=sum;
        }
    }
    cout<<mn;
    return 0;
}