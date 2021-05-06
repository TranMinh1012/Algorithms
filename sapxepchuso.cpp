#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        long long dp[10] = {0};
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            while(a[i])
            {
                dp[a[i]%10] = 1;
                a[i] /= 10;
            }
        }
        for(int i = 0; i < 10; i++)
        {
            if(dp[i])
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}