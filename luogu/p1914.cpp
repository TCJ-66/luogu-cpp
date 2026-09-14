#include <iostream>
#include<string>
using namespace std;
int main()
{
    int n;string secret;char b;
    cin>>n;
    cin>>secret;
    for(char c:secret)
    {
        if(c+n>122)
        {
            b=c-26+n;
            cout<<b;
        }
        else{
            c=c+n;
            cout<<c;
        }
    }
    return 0;
}