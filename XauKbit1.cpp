#include<bits/stdc++.h>
using namespace std;
int n, k, stop = 0, x[100];
void KhoiTao()
{
    for(int i = 0; i < n; i++)
    {
        x[i] = 0;
    }
}
void Xuat()
{
    for(int i = 0; i < n; i++)
    {
        cout << x[i];
    }
    cout << endl;
}
void Sinh()
{
    int i = n-1;
    while(i>=0 && x[i]==1)
    {
        x[i] = 0;
        i--;
    }
    if(i==-1)
    {
        stop = 1;
    } else {
        x[i] = 1;
    }
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(x[i] == 1) count++;
    }
    if(count == k)
    {
        Xuat();
    }  
}
void SinhNhiPhan()
{
    stop = 0;
    while(stop == 0)
    {
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
        SinhNhiPhan();
    }
    return 0;
}