#include <iostream>
#include <cmath>
using namespace std;
bool zhishu(int a)
{
    int b=sqrt(a),sum=0;
    for(int i=2;i<=b;i++)
    {
        if(a%i==0&&a!=2) sum++;
    }
    return sum==0;
}
int main()
{
    int n,num[105]={0};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
        if(!zhishu(num[i])) num[i]=0;
        if(num[i]==1) num[i]=0;
    }
    for(int j=0;j<n;j++)
    {
        if(num[j]!=0) cout<<num[j]<<" ";
    }
    return 0;
}