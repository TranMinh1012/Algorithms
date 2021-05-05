#include<bits/stdc++.h>
using namespace std;

int n;
long long dp[105];
void Con_Ech()
{
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for(int i = 4; i <= 100; i++)
    {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }
}
int main()
{
    int t;
    cin >> t;
    Con_Ech();
    while(t--)
    {
        cin >> n;
        cout << dp[n] << endl;
    }
    return 0;
}