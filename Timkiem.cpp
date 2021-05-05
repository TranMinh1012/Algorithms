#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, X;
        cin >> n >> X;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int tmp = -1;
        for(int i = 0; i < n; i++)
        {
            if(X == a[i])
            {
                tmp = 1;
                break;
            }
        }
        cout << tmp << endl;
    }
    return 0;
}