#include<bits/stdc++.h>
using namespace std;

struct arr{
    int value, count;
};
bool cmp(arr x, arr y)
{
    if(x.count==y.count && x.value < y.value) return true;
    if(x.count > y.count) return true;
    return false;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        arr a[n];
        vector <int> d(n+5);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i].value;
            d[a[i].value]++;
        }
        for(int i = 0; i < n; i++)
        {
            a[i].count = d[a[i].value];
        }
        sort(a, a+n, cmp);
        for(int i = 0; i < n; i++)
        {
            cout << a[i].value << " ";
        }
        cout << endl;
    }
    return 0;
}