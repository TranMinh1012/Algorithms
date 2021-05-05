#include<bits/stdc++.h>
using namespace std;
int n, x[100], stop = 0;
void KhoiTao()
{
    for(int i = 1; i<=n; i++)
    {
        x[i] = n-i+1;
    }
}
void Xuat()
{
    for(int i = 1; i<=n; i++)
    {
        cout << x[i];
    }
    cout << " ";
}
void Sinh()
{
    int i = n-1;
    while(i>0 && x[i] < x[i+1])
    {
        i--;
    }
    if(i==0)
    {
        stop = 1;
    } else {
        int k = n;
        while(x[i] < x[k])
        {
            k--;
        }
        swap(x[i], x[k]);
        int l = i+1, r = n;
        while(l<r)
        {
            swap(x[l], x[r]);
            l++; r--;
        }
    }
}
void HoanViNguoc()
{
    stop = 0;
    while(stop == 0)
    {
        Xuat();
        Sinh();
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        KhoiTao();
        HoanViNguoc();
        cout << endl;
    }
    return 0;
}