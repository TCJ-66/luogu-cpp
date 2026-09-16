#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s,q;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        int a,c,d;string b,m,n;
        cin>>a;
        if(a==1)
        {
            cin>>b;
            s+=b;
            cout<<s<<endl;
        }
        else if(a==2)
        {
            cin>>c>>d;
            s=s.substr(c,d);
            cout<<s<<endl;
        }
        else if(a==3)
        {
            cin>>c;
            cin>>b;
            m=s.substr(0,c);
            n=s.substr(c,s.size()+1-c);
            s=m+b+n;
            cout<<s<<endl;
        }
        else if(a==4)
        {
            cin>>b;
            cout<<(int)s.find(b)<<endl;
        }
    }
    return 0;
}
