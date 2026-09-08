#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double t,ml;int n,cup;
    cout<<fixed<<setprecision(3);
    cin>>t>>n;ml=t/n;cup = n*2;
    cout<<ml<<endl;
    cout<<cup;
    return 0;
}