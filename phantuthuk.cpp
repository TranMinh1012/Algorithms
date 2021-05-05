#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    { 
        long long m, n, k;
        cin >> m >> n >> k;
        long long a[m], b[n];
        vector <long long> c;
        for(int i = 0; i < m; i++)
        {
            cin >> a[i];
            c.push_back(a[i]);
        }
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
            c.push_back(b[i]);
        }
        sort(c.begin(), c.end());
        cout << c[k-1] << endl;
    }
    return 0;
}