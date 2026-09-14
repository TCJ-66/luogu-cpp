#include <iostream>
using namespace std;
int main()
{
    int l,m,sum=0,tree[10001]={0};
    cin>>l>>m;
    for(int j=0;j<m;j++)
    {
        int u,v;
        cin>>u>>v;
        for(u;u<v+1;u++)
        {
            tree[u]-=1;
        }
    }
    for(int i=0;i<l+1;i++)
    {
        if(tree[i]<-1)
        {
            tree[i]=-1;
        }
        sum=sum+tree[i]+1;
    }
    cout<<sum;
    return 0;
}