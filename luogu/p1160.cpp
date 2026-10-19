#include <iostream>

using namespace std;
const int N = 1e5+10;
int l[N],r[N],e[N],idx,num[N]={0};
int n,m;

void init()
{
    e[2] = 1;
    idx = 3;
    r[0] = 2,r[2] = 1;
    l[2] = 0,l[1] = 2;
    num[1] = 1;
}

void add_to_left(int k)
{
    e[idx] = idx - 1;
    l[idx] = l[k];
    r[idx] = k;
    r[l[k]] = idx;
    l[k] = idx++;
}

void add_to_right(int k)
{
    e[idx] = idx -1;
    r[idx] = r[k];
    l[idx] = k;
    l[r[k]] = idx;
    r[k] = idx++;
}

void remove(int k)
{
    r[l[k]] = r[k];
    l[r[k]] = l[k];
}

int main()
{
    scanf("%d",&n);
    int a = 2;
    init();
    while(a<=n)
    {
        int k,p;
        scanf("%d%d",&k,&p);
        if(p == 0)
        {
            add_to_left(k+1);
        }
        else
        {
            add_to_right(k+1);
        }
        num[a] = 1;
        a++;
    }
    scanf("%d",&m);
    while(m--)
    {
        int x;
        scanf("%d",&x);
        if(num[x]) 
        {
            remove(x + 1);
            num[x]=0;
        }
    }
    for(int i= r[0];i != 1;i = r[i])
    {
        printf("%d ",e[i]);
    }
    return 0;
}