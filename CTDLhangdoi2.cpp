#include<bits/stdc++.h>
using namespace std;

int Q, n;
string s;
queue <int> q;
int main()
{
    cin >> Q;
    while(Q--)
    {
        cin >> s;
        if(s == "PUSH")
        {
            cin >> n;
            q.push(n);
        } else if (s == "POP")
        {
            if(!q.empty()) q.pop();
        } else if (s == "PRINTFRONT")
        {
            if(!q.empty())
            {
                cout << q.front() << endl;
            } else {
                    cout << "NONE" << endl;
            }
        }
    }
    return 0;
}