#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,min;
    cin>>a>>b>>c>>d;
    min=c*60+d-(a*60+b);
    e=min/60;f=min%60;
    cout<<e<<" "<<f;
    return 0;
}