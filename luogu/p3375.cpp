#include <iostream>
#include <cstring>

using namespace std;

const int N =1e6 + 10;
int ne[N];
char s[N],q[N];

int main()
{
    scanf("%s%s",s+1,q+1);
    int n = strlen(q + 1),m = strlen(s + 1);
    for(int i = 2,j = 0;i <= n;i ++) 
    {
        while(j && q[i] != q[j+1]) j = ne[j];
        if(q[i] == q[j+1]) j++;
        ne[i] = j;
    }

    for(int i = 1,j = 0;i <= m;i ++)
    {
        while(j && q[j+1] != s[i]) j = ne[j];
        if(q[j+1] == s[i]) j++;
        if(j == n)
        {
            printf("%d\n",i - n + 1);
            j = ne[j];
        }
    }
    for(int i = 1;i <= n;i ++) printf("%d ",ne[i]);
    return 0;
}