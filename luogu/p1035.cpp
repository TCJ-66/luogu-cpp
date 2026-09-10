#include <iostream>
using namespace std;
int main()
{
    double k,Sn=1;//涉及到乘法一定要小心数据类型有没有规定为浮点数！！！
    double n=1;
    cin>>k;
    while (k>=Sn)
    {
        n++;
        Sn=Sn+1/n;
    }
    cout<<n;
    return 0;
}