#include<bits/stdc++.h>
using namespace std;

long long Binary_Search(long long a[], long long k, long long l, long long r)
{
    while(l <= r)
    {
        long long mid = (l+r) / 2;
        if(a[mid] == k){
            return mid;
        }
        else if(a[mid] > k){
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        long long a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if(Binary_Search(a, k, 0, n-1) == -1)
        {
            cout << "NO" << endl;
        } else {
            cout << Binary_Search(a, k, 0, n-1) + 1 << endl;
        }
    }
    return 0;
}