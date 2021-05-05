#include<bits/stdc++.h>
using namespace std;

int n, a[1005], f[1005];
int Solve()
{
    memset(f, 0, sizeof(f));
    int res = 1;
    for(int i = 1; i <= n; i++)
    {
        f[i] = 1;
        for(int j = 1; j < i; j++)
        {
            if(a[j] < a[i])
            {
                f[i] = max(f[i], f[j]+1);
            }
        }
        if(f[i] > res)
        {
            res = f[i];
        }
    }
    return res;
}
int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cout << Solve() << endl;
    return 0;
}