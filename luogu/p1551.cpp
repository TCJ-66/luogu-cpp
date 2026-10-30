#include <iostream>

using namespace std;

const int N = 5010;
int p[N];
int n,m,q;

int find(int x)
{
    if(p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main()
{
    scanf("%d%d%d",&n,&m,&q);
    for(int i = 1;i <= n;i ++) p[i] = i;
    int a,b;
    while(m--)
    {
        scanf("%d%d",&a,&b);
        p[find(a)] = find(b);
    }

    while(q--)
    {
        scanf("%d%d",&a,&b);
        if(find(a) == find(b)) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}