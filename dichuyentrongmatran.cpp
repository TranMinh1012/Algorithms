#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> m >> n;
        int a[m+1][n+1];
        int dp[m+1][n+1];
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                if(i==0 || j==0)
                {
                    dp[i][j] = 1;
                }
            }
        }
        for(int i = 1; i < m; i++)
        {
            for(int j = 1; j < n; j++)
            {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        cout << dp[m-1][n-1] << endl;
    }
    return 0;
}