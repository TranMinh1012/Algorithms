#include<bits/stdc++.h>
using namespace std;
int Q, n;
string s;
stack <int> a;

int main()
{
    cin >> Q;
    while(Q--)
    {
        cin >> s;
        if(s == "PUSH")
        {
            cin >> n;
            a.push(n);
        } else if (s == "POP" && !a.empty() )
        {
            a.pop();
        } else if (s == "PRINT"){
            if(a.empty())
            {
                cout << "NONE";
            } else {
                cout << a.top();
            }
            cout << endl;
        }
    }
    return 0;
}