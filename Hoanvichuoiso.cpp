#include<bits/stdc++.h>
using namespace std;
int n;
string x;
void Sinh()
{
    cout << n << " ";
    int a[100];
    for(int i = 1; i <= x.length(); i++)
    {
        a[i] = int(x[i-1]-'0');
    }
    int i = x.length()-1;
    while(i>0 && a[i] >= a[i+1])
    {
        i--;
    }
    if(i==0)
    {
        cout << "BIGGEST";
    } else {
        int k = x.length();
        while(a[i] >= a[k])
        {
            k--;
        }
        swap(a[i], a[k]);
        int l=i+1, r=x.length();
        while(l<r)
        {
            swap(a[l],a[r]);
            l++;
            r--;
        }
        for(int i = 1; i <= x.length(); i++)
        {
            cout << a[i];
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;
        Sinh();
        cout << endl;
    }
    return 0;
}