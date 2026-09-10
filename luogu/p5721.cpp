#include <iostream>
using namespace std;
int main()
{
    int n,sum=0,time=0;
    cin>>n;int b=n,c=n;
    sum=(n+1)*n/2;
    for(int i=1;i<=sum;i++)
    {
        if(i<10)
        {
            cout<<0<<i;
        }
        else
        {
            cout<<i;
        }
        if(i==b)
        {
            cout<<"\n";
            time+=1;
            b=(n*2-time)*(time+1)/2;
        }
    }
    return 0;
}