#include <iostream>

using namespace std;
int ne[105];
void remove(int k)
{
    ne[k]=ne[ne[k]];
}
int main()
{
    int m,n;
    cin>>n>>m;
    int live = n,num = 1;
    for(int i=1;i<=n;i++)
    {
        if(i < n) ne[i] = i+1;
        else ne[i] = 1;
    }
    for(int i=1;live!=0;i = ne[i])
    {
        if(num == m) num = 1;
        if(num == m-1) 
        {
            cout<<ne[i]<<" ";
            live--;
            remove(i);
        }
        num++;
    }
    return 0;
}