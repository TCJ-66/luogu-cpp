#include <iostream>
using namespace std;
int main()
{
    int x,a,b,c=0,d;
    cin>>x;
    if(x%2==0&&(x>4&&x<=12))
    {
        a=1;
    }
    else
    {
        a=0;
    }
    if(x%2==0||(x>4&&x<=12))
    {
        b=1;
        if(x%2==0&&x>4&&x<=12)
        {
            c=0;
        }
        else c=1;
    }
    else
    {
        b=0;
    }
    if(x%2!=0&&(x<=4||x>12))
    {
        d=1;
    }
    else
    {
        d=0;
    }
    cout<<a<<" "<<b<<" "<<c<<" "<<d;
    return 0;
}
   