#include <iostream>
using namespace std;
int main()
{
    int n,x,cnt=0;
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
        int t=i;
        while(t!=0)
        {
            if(t%10==x)
            {
                cnt+=1;
            }
            t=t/10;
        }
    }
    cout<<cnt;
    return 0;
}