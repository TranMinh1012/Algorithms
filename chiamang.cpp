#include<bits/stdc++.h>
using namespace std;
void Chia_Mang(int a[], int n, int k)
{
    int sum1=0, sum2=0;
    sort(a, a+n);
    int min = (k <= n-k) ? k : n-k;
    for(int i = 0; i < min; i++)
    {
        sum1 += a[i];
    }
    for(int i = min; i < n; i++)
    {
        sum2 += a[i];
    }
    cout << sum2-sum1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Chia_Mang(a, n, k);
    }
    return 0; 
}