#include<bits/stdc++.h>
using namespace std;
long long Mu(int n)
{
    if(n==0) return 1;
    if(n==1) return 2;
    long long x = Mu(n/2);
    if(n%2==0) return x*x;
    return 2*x*x;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        long long k;
        cin >> n >> k;
        long long length = Mu(n)/2;
        while(1)
        {
            if(n==1)
            {
                cout << 1;
                break;
            }
            if(length == k)
            {
                cout << n;
                break;
            }
            if(k > length)
            {
                k = length - (k - length);
            }
            n--;
            length /= 2;
        }
        cout << endl;
    }
    return 0;
}