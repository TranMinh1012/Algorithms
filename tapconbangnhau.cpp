#include<bits/stdc++.h>
#include<vector>
using namespace std;
int n, s, sum=0, check=0;
int a[100];
vector<int> b;

void Try(int i)
{
    for(int j = i; j < n; j++)
    {
        if(check == 1)
        {
            break;
        }
        sum += b[j];
        if(sum == s)
        {
            cout << "YES";
            check = 1;
        }
        else{
            if(sum + b[j] <= s)
            {
                Try(j+1);
            }
        }
        sum -= b[j];
        if(i==0 && j==n-1)
        {
            cout << "NO";
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int tong = 0;   
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            b.push_back(a[i]);
            tong += a[i];
        }
        if(tong % 2 != 0)
        {
            cout << "NO";
        }
        else{
            s = tong/2;
            sort(b.begin(), b.end());
            Try(0);
        }
        cout << endl;
        check = 0;
        b.clear();
    }
    return 0;
}
