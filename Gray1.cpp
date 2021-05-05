#include<bits/stdc++.h>
using namespace std;
void Gray_1(int n)
{
    long m = pow(2, n);
    string a[m+5];
    a[1] = "0";
    a[2] = "1";
    if(n>1)
    {
        int k = 2;
        for(int i = 2; i <= n; i++)
        {
            int t = 1;
            for(int j = 1; j <= i; j++)
            {
                t *= 2;
            }
            for(int j = 1; j <= k; j++)
            {
                a[t-j+1] = "1" + a[j];
                a[j] = "0" + a[j];
            }
            k = t;
        }
    }
    for(int i = 1; i <= m; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        Gray_1(n);
    }
    return 0;
}