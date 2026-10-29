#include <iostream>
#include <cstring> 

using namespace std;

const int N = 3e6 + 10;
int son[N][75],cnt[N],idx;
char str[N];

void insert(char str[])
{
    int p = 0,m = strlen(str);
    for(int i = 0;i < m;i ++)
    {
        int u = str[i] - '0';
        if(!son[p][u]) son[p][u] = ++idx;
        p = son[p][u];
        cnt[p]++;
    }
}

int query(char str[])
{
    int p = 0,m = strlen(str),sum = 0;
    for(int i = 0;i < m;i ++)
    {
        int u = str[i] - '0';
        if(!son[p][u]) return 0;
        p = son[p][u];
    }

    return cnt[p];
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,q;
        scanf("%d%d",&n,&q);
        for(int i = 0;i < n;i ++)
        {
            scanf("%s",str);
            insert(str);
        }

        for(int i = 0;i < q;i ++)
        {
            scanf("%s",str);
            printf("%d\n",query(str));
        }
        for(int i = 0;i <= idx;i ++) 
        { 
            memset(son[i],0,sizeof(son[i])); 
            cnt[i] = 0;
        }
        idx = 0; 
    }
    return 0;
}