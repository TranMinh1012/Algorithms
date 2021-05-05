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
        long long a[n], b[n-1];
        for(long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i = 0; i < n-1; i++)
        {
            cin >> b[i];
        }
        long long ind = n-1;
        for(long long i = 0; i < n; i++)
        {
            if(a[i] != b[i])
            {
                ind = i;
                break;
            }
        }
        cout << ind+1 << endl;
    }
    return 0;
}