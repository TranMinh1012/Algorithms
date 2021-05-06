#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, m;
        cin >> n >> m;
        long long a[n], b[m];
        vector <long long> c;
        for(int i = 0; i < n; i++)
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
        for(int i = 0; i < c.size(); i++)
        {
            cout << c[i] << " ";
        }
        cout << endl;
    }
    return 0;
}