#include<iostream>
#include<queue>
#define max 100
using namespace std;
class Dothi{
  int n;
  int a[max][max];
  public:
  bool chuaxet[max];
  void readdata();
  void init();
  void queueBFS(int u);
};
void Dothi::readdata()
{
    cout << "\nNhap so dinh cua do thi n = ";
    cin >> n;
    cout << "\nNhap ma tran ke:\n";
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
}
void Dothi::init()
{
    for(int i = 1; i <= n; i++)
    {
        chuaxet[i] = true;
    }
}
void Dothi::queueBFS(int u)
{
    queue<int> hangdoi;
    cout << " " << u;
    chuaxet[u] = false;
    hangdoi.push(u);
    while(!hangdoi.empty())
    {
        int s = hangdoi.front();
        hangdoi.pop();
        for(int t = 1; t <= n; t++)
        {
            if( (a[s][t]==1) && (chuaxet[t]==true) )
            {
                cout << " " << t;
                chuaxet[t] = false;
                hangdoi.push(t);
            }
        }
    }
}
int main()
{
    Dothi G;
    G.readdata();
    G.init();
    G.queueBFS(1);
}