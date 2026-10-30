#include <iostream>

using namespace std;

const int N = 2e5 + 10;
int p[N];
int n,m;

int find(int x)
{
    if(p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main()
{
    scanf("%d%d",&n,&m);
    for(int i = 1 ;i <= n;i ++) p[i] = i;

    while(m--)
    {
        int x,y,z;
        scanf("%d%d%d",&z,&x,&y);
        if(z == 1) p[find(x)] = find(y);
        else 
        {
            if(find(x) == find(y)) printf("Y\n");
            else printf("N\n");
        }
    }
    return 0;
}