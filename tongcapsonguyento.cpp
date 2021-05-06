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
    bool check[n+1];
    for(int i = 2; i < n; i++)
    {
        check[i] = true;
    }
    for(int i = 2; i < n; i++)
    {
        if(check[i])
        {
            for(int j = 2*i; j < n; j += i)
            {
                check[j] = false;
            }
        }
    }
    int tmp = 0; 
    for(int i = 2; i < n; i++)
    {
        if(check[i] && check[n-i])
        {
            cout << i << " " << n-i;
            tmp = 1;
            break;
        }
    }
    if(tmp == 0) cout << -1;
    cout << endl;
    }
    return 0;
}