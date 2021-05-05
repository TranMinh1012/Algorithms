#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long a[n];
        long long max = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a+n);
        for(int i = 0; i < n; i++)
        {
            max = (max + a[i]*i) % 1000000007;
        }
        cout << max << endl;
    }
    return 0;
}