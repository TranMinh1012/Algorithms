#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        queue <long long> q;
        q.push(1);
        int dem = 0;
        while(q.front() <= n)
        {
            long long tmp = q.front();
            dem++;
            q.pop();
            q.push(tmp*10);
            q.push(tmp*10+1);
        }
        cout << dem << endl;
    }
    return 0;
}