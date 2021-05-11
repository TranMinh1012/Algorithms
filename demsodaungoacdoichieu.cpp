#include<bits/stdc++.h>
using namespace std;

void Dao_Dau_Ngoac(string s)
{
    stack <char> a;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i]=='(' || s[i]==')' && a.empty())
        {
            a.push(s[i]);
        } else if (s[i] == ')')
        {
            if(!a.empty() && a.top()=='(')
            {
                a.pop();
            } else {
                a.push(s[i]);
            }
        }
    }
    int c1=0, c2=0, res=0;
    while(!a.empty())
    {
        if(a.top()=='(')
        {
            c1++;
        } else {
            c2++;
        }
        a.pop();
    }
    res = c1/2 + c2/2 + c1%2 + c2%2;
    cout << res << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        Dao_Dau_Ngoac(s);
    }
    return 0;
}