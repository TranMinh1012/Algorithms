// Số N có 2^(N-1) dãy
#include<bits/stdc++.h>
using namespace std;
#define mod 123456789

long long Mu(long long n)
{
    if(n==1) return 2;
    if(n%2==0)
    {
        long long x = Mu(n/2) % mod;
        return (x*x) % mod;
    } else {
        return (2 * (Mu(n-1) % mod)) % mod;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        cout << Mu(n-1) << endl;
    }
    return 0;
}