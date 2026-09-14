#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;//定义字符串
    cin>>s;//录入字符串
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i]-=32;
        }
    }
    /*
    通过for循环对整个字符串进行遍历，拆成一个个字符
    再根据if的条件判断，得出每个字符是否需要进行大小写转换
    通过ascil表进行大小写转换
    */
    cout<<s;//最终输出新字符串
    return 0;
}