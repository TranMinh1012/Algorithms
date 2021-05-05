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
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a+n);
        vector<int> b;
        for(int i = 0; i < (n/2); i++)
        {
            b.push_back(a[n-i-1]);
            b.push_back(a[i]);
        }
        if(n%2 != 0) b.push_back(a[n/2]);
        for(int i = 0; i < b.size(); i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}