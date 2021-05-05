#include<bits/stdc++.h>
using namespace std;
int n, a[100], stop = 0;
void KhoiTao()
{
    for(int i = 0; i < n; i++)
    {
        a[i] = 0;
    }
}
void Xuat()
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " " << " " << " " << " ";
    }
    cout << endl;
}
void Sinh()
{
    int i = n-1;
    while(i>=0 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if(i == -1)
    {
        stop = 1;
    } else {
        a[i] = 1;
    }
}
void SinhDoiXung()
{
    stop = 0;
    while(stop == 0)
    {
        int count = 0;
        for(int i = 0; i < n/2; i++)
        {
            if(a[i] == a[n-i-1])
            {
                count++;
            }
        }
        if( count == (n/2) )
        {
            Xuat();
        }
        Sinh();
    }
}
int main()
{
    cin >> n;
    KhoiTao();
    SinhDoiXung();
    return 0;
}