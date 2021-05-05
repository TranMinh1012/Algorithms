#include<bits/stdc++.h>
using namespace std;

long long power(long long n, long long k)
{
    if(k == 1) return n;
    if(k % 2 != 0)
    {
        return (n*power(n, k-1))%1000000007;
    } else {
        long long a = power(n, k/2);
        return (a*a)%1000000007;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n ,k;
        cin >> n >> k;
        cout << power(n ,k) << endl;
    }
    return 0;
}