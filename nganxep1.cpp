#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n;
    stack<int> a;
    while(cin >> s)
    {
        if(s == "push")
        {
            cin >> n;
            a.push(n);
        } else if (s == "pop")
        {
            a.pop();
        } else 
        {
            if(a.empty())
            {
                cout << "empty" << endl;
                continue;
            }
            vector <int> b;
            while(!a.empty())
            {
                b.push_back(a.top());
                a.pop();
            }
            reverse(b.begin(), b.end());
            for(int i = 0; i < b.size(); i++)
            {
                cout << b[i] << " ";
                a.push(b[i]);
            }
            cout << endl;
        }
    }
    return 0;
}