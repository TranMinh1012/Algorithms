#include<bits/stdc++.h>
#include<vector>
using namespace std;
long long n, a[1000005];

void Merge(long long a[], long long mid, long long l, long long r)
{
    long long i = l;
    long long j = mid + 1;
    vector <long long> b;
    while(i<=mid && j<=r)
    {
        if(a[i] < a[j])
        {
            b.push_back(a[i]);
            i++;
        } else {
            b.push_back(a[j]);
            j++;
        }
    }
    while(j <= r)
    {
        b.push_back(a[j]);
        j++;
    }
    while(i <= mid)
    {
        b.push_back(a[i]);
        i++;
    }
    int ind = 0;
    for(int k = l; k <= r; k++)
    {
        a[k] = b[ind];
        ind++;
    }
}
void Merge_Sort(long long a[], long long l, long long r)
{
    if(l != r)
    {
        int mid = (l+r)/2;
        Merge_Sort(a, l, mid);
        Merge_Sort(a, mid+1, r);
        Merge(a, mid, l, r);
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Merge_Sort(a, 0, n-1);
        for(int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}