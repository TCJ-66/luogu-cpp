#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;int sum=0;//定义字符串以及初始化字符总个数
    getline(cin,s);//录入字符串，注意可能会有空格，因此选择getline
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==32)
        {
            continue;
        }
        sum+=1;
    }
    /*
    for循环遍历整个字符串，计算有效字符总个数
    */
    cout<<sum;//输出
    return 0;
}