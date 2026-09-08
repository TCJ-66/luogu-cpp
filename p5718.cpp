#include <iostream>
using namespace std;
int main()
{
    int num,min=1001;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        int a;
        cin>>a;
        if(a<=min)
        {
            min=a;
        }
    }
    cout<<min;
    return 0;
}