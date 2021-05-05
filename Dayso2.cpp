#include<bits/stdc++.h>
using namespace std;
void Xuat(int a[], int n)
{
    cout << "[";
    for(int i = 0; i < n-1; i++)
    {
        cout << a[i] << " "; 
    }
    cout << a[n-1] << "]" << " ";
}
void Try(int a[], int n)
{
    if(n < 1)
    {
        return;
    } else {
        int B[n-1];
        for(int i = 0; i < n-1; i++)
        {
            int k = a[i] + a[i+1];
            B[i] = k;
        }
        Try(B, n-1);
        Xuat(a, n);
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[10];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Try(a, n);
        cout << endl;
    }
    return 0;
}