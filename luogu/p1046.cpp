#include <iostream>
using namespace std;
int main()
{
    int height[10],tao,cnt=0;
    for(int i=0;i<10;i++)
    {
        cin>>height[i];
    }
    cin>>tao;
    for(int j=0;j<10;j++)
    {
        if(tao+30>=height[j])
        {
            cnt+=1;
        }
    }
    cout<<cnt;
    return 0;
}