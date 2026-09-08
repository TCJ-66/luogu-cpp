#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout<<fixed<<setprecision(1);
    unsigned int n,k,time=0,sum1=0,sum2=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        if(i%k==0)
        {
            sum1+=i;
        }
        else
        {
            sum2+=i;
            time+=1;
        }
    }
    if(time!=0&&time!=n)
    {
        cout<<float(sum1)/(n-time)<<" "<<float(sum2)/time;
    }
    else if(time==0)
    {
        cout<<float(sum1)/(n-time)<<" "<<0.0;
    }
    else if(time==n)
    {
        cout<<0.0<<" "<<float(sum2)/time;
    }
    return 0;
}