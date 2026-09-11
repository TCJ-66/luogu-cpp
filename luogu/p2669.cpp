#include <iostream>
using namespace std;
int main()
{
    int k,n=1;long long coin=0;
    cin>>k;
    while(k>=(1+n)*n/2)
    {
        if((2+n)*(n+1)/2>k)
        {
            break;
        }
        else{n+=1;}
    }
    int cnt=k-(1+n)*n/2;
    for(int i=1;i<=n;i++)
    {
        coin=coin+i*i;
    }
    cout<<coin+(n+1)*cnt;
    return 0;
}