#include<bits/stdc++.h>
using namespace std;

long long n, m, tmp;
long long a[100005], b[100005];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        for(int i = 0; i < n; i++)
        {
            cin >> tmp; // 1 2 3 4 5
            a[tmp] = 1; // mảng đánh dấu cho các ptu 1 2 3 4 5 ở trên
        }
        for(int i = 0; i < m; i++)
        {
            cin >> tmp;
            b[tmp] = 1;
        }
        for(int i = 0; i <= 100004; i++)
        {
            if(a[i]==1 || b[i]==1) cout << i << " "; // in ra chỉ số nên mặc định đã đc sắp xếp
        }
        cout << endl;
        for(int i = 0; i <= 100004; i++)
        {
            if(a[i]==1 && b[i]==1) cout << i << " "; // in ra chỉ số nên mặc định là đã đc sắp xếp
        }
        cout << endl;
    }
    return 0;
}