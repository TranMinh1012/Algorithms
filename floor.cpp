#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, x;
        cin >> n >> x;
        long long a[n];
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        long long max = a[1];
        long long ind = 0;
        for(int i = 2; i <= n; i++)
        {
            if( (max < a[i]) && (a[i] <= x))
            {
                max = a[i];
                ind = i;
            }
        }
        if(ind == 0)
        {
            cout << -1;
        } else {
            cout << ind;
        }
        cout << endl;
    }
    return 0;
}