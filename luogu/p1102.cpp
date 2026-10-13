#include <iostream>
using namespace std;
const int A=2e5+10;
int q[A],tmp[A];
void merge_sort(int q[],int l,int r)
{
    if(l>=r) return ;
    int mid=l+r>>1;
    merge_sort(q,l,mid),merge_sort(q,mid+1,r);
    int i=l,j=mid+1,k=0;
    while(i<=mid&&j<=r)
    {
        if(q[i]<=q[j]) tmp[k++]=q[i++];
        else tmp[k++]=q[j++];
    }
    while(i<=mid) tmp[k++]=q[i++];
    while(j<=r) tmp[k++]=q[j++];
    for(int a=l,b=0;a<=r;a++,b++) q[a]=tmp[b]; 
}
int main()
{
    int N,C;
    long long sum=0;
    cin>>N>>C;
    for(int i=0;i<N;i++)
    {
        cin>>q[i];
    }
    merge_sort(q,0,N-1);
    int n=0,m=0;
    for(int i=0;i<N;i++)
    {
        while(q[n]<q[i]+C&&n<N) n++;
        while(q[m]<=q[i]+C&&m<N) m++;
        if(m<n) m=n;
        sum+=m-n;
    }
    cout<<sum;
    return 0;
}
