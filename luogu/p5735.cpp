#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double dist(double x1,double x2,double y1,double y2)
{
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int main()
{
    cout<<fixed<<setprecision(2);
    double l=0;
    double x[3],y[3];
    for(int i=0;i<3;i++)
    {
        cin>>x[i]>>y[i];
    }
    for(int j=0;j<3;j++)
    {
        l+=dist(x[j%3],x[(j+1)%3],y[j%3],y[(j+1)%3]);
    }
    cout<<l;
    return 0;
}