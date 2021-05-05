#include<bits/stdc++.h>
using namespace std;
int n, stop = 0;
string X;
void Khoitao()
{
    for(int i = 0; i < n; i++)
    {
        X[i] = 'A';
    }
}
void Sinh()
{
    int i = n-1;
    while(i>=0 && X[i] == 'B')
    {
        X[i] = 'A';
        i--;
    }
    if(i==-1)
    {
        stop = 1;
    } else {
        X[i] = 'B';
    }
}
void Xuat()
{
    for(int i = 0; i < n; i++)
    {
        cout << X[i];
    }
    cout << " ";
}
void Lietke()
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
        Khoitao();
        Lietke();
        cout << endl;
    }
    return 0;
}
