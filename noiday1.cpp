#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        priority_queue <int, vector<int>, greater<int> > pq;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            pq.push(a[i]);
        }
        long long OPT=0, first, second;
        while(pq.size()>1)
        {
            first = pq.top(); pq.pop();
            second = pq.top(); pq.pop();
            OPT = OPT + first + second;
            pq.push(first+second);
        }
        cout << OPT << endl;
    }
    return 0;
}