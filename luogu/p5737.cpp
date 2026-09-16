#include <iostream>
using namespace std;
bool run(int year)
{
    if((year%4==0&&year%100!=0)||(year%400==0)) return true;
    else return false;
}
int main()
{
    int x,y,sum=0; 
    cin>>x>>y;
    bool year[3001]={false};
    for(int i=x;i<=y;i++)
    {
        year[i]=run(i);
        if(year[i]) sum++;
    }
    cout<<sum<<endl;
    for(int j=x;j<=y;j++)
    {
        if(year[j]) cout<<j<<" "; 
    }    
    return 0;
}