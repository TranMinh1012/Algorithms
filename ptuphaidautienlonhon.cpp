#include<bits/stdc++.h>
using namespace std;

void Ptu_phai_lon_hon(long long a[], long long n)
{
    stack <long long> s;
    long long b[n];
    for(int i = n-1; i >= 0; i--)
    {
        while(!s.empty() && s.top() <= a[i])
        {
            s.pop();
        }
        if(s.empty())
        {
            b[i] = -1;
        } else {
            b[i] = s.top();
        }
        s.push(a[i]);
    }
    for(int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Ptu_phai_lon_hon(a, n);
    }
    return 0;
}