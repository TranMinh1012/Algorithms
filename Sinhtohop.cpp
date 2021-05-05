#include<bits/stdc++.h>
using namespace std;
int n, k, x[100], stop = 0;
void KhoiTao()
{
    for(int i = 1; i <= k; i++)
    {
        x[i] = i;
    }
}
void Xuat()
{
    for(int i = 1; i <= k; i++)
    {
        cout << x[i];
    }
    cout << " ";
}
void Sinh()
{
    int i = k;
    while(i>0 && x[i] == n-k+i)
    {
        i--;
    }
    if(i == 0)
    {
        stop = 1;
    } else {
        x[i]++;
    }
    int p = x[i];
    while(i<=k)
    {
        x[i++] = p++;
    }
}
void SinhToHop()
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
        cin >> n >> k;
        KhoiTao();
        SinhToHop();
        cout << endl;
    }
    return 0;
}