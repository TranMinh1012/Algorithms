#include<bits/stdc++.h>
using namespace std;
int t, n, a, b;

int main()
{
    cin >> t;
    while(t--)
    {
        cin >> n;
        queue <int> q;
        while(n--)
        {
            cin >> a;
            if(a==1)
            {
                cout << q.size() << endl;
            } else if (a==2)
            {
                if(q.empty()) cout << "YES" << endl;
                else cout << "NO" << endl;
            } else if (a==3)
            {
                cin >> b;
                q.push(b);
            } else if (a==4)
            {
                if(!q.empty()) q.pop();
            } else if(a==5)
            {
                if(!q.empty()) cout << q.front() << endl;
                else cout << -1 << endl;
            } else if (a==6)
            {
                if(!q.empty()) cout << q.back() << endl;
                else cout << -1 << endl;
            }
        }
    }
    return 0;
}