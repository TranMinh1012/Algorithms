// Duyet do thi su dung pp DFS lap dung ngan xep
#include<iostream>
#include<stack>
#define max 100
using namespace std;
class Dothi{
    int n; // So dinh cua do thi
    int a[max][max]; // Ma tran ke 
    public:
    bool chuaxet[max]; // Mang theo doi trang thai duyet moi dinh
    void readdata(); // Ham doc du lieu tu ban phim
    void init(); // Ham khoi tao du lieu
    void loopDFS(int u); // Ham duyet cac dinh cua do thi su dung thuat toan DFS ngan xep
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
void Dothi::loopDFS(int u)
{
    // Khoi tao
    stack<int> nganxep;
    cout << " " << u;
    chuaxet[u] = false;
    nganxep.push(u);
    // Lap
    while(!nganxep.empty())
    {
        int s = nganxep.top();
        nganxep.pop(); // Xóa phần từ chỉ có 1 liên kết ra khỏi stack
        for(int v = 1; v <= n; v++)
        {
            if( (a[s][v]==1) && (chuaxet[v]==true) )
            {
                cout << " " << v;
                chuaxet[v] = false;
                nganxep.push(s);
                nganxep.push(v);
                break;
            }
        }
    }
}
int main()
{
    Dothi G;
    G.readdata();
    G.init();
    //cout << "\nket qua duyet DFS stack: ";
    G.loopDFS(1);
}