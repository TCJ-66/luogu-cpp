#include <iostream>
using namespace std;
int main()
{
    int n,a=1,b=10,c=10,d=1,sum2=0,sum[10];int num[10]={0,0,0,0,0,0,0,0,0,0};float e=0.1;
    cin>>n;
    while(n/c!=0)
    {
        c=c*10;
        d++;
    }
    for(int i=0;i<d;i++)
    {
        num[i]=n%b/a;
        a=a*10;
        b=b*10;
        e=e*10;
    }
    for(int k=0;k<d;k++)
    {
        sum[k]=num[k]*e;
        e=e/10;
        sum2=sum2+sum[k];
    }
    if(n>0){cout<<sum2;}
    else{cout<<sum2;}
}
