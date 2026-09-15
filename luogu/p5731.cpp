#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n,num[10][10]={0};//定义一个数组以及要输入的整数
    cin>>n;
    int x=0,y=0,d=0;//d为方向
    num[x][y]=1;//定义初态时的位置num[0][0]以及初始值
    int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};//定义方向数组
    for(int cnt=2;cnt<=n*n;cnt++)
    {
        int nx=x+dx[d],ny=y+dy[d];
        while(nx<0||ny<0||nx>=n||ny>=n||num[nx][ny]!=0)//换方向要满足的条件：撞墙（数组值不为零或出界）
        {
            d=(d+1)%4;//四个方向循环的思想
            nx=x+dx[d],ny=y+dy[d];
        }
        x=nx,y=ny;//先取下一个格子，再给他赋值
        num[x][y]=cnt;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<setw(3)<<num[i][j];
        }
        cout<<endl;
    }
    return 0;
}