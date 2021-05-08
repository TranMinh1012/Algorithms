#include<bits/stdc++.h>
using namespace std;

void Ngoac_Dai_Nhat(string s)
{
    int ans = 0;
    stack <int> a;
    a.push(-1);
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '(')
        {
            a.push(i);
        } else {
            a.pop();
            if(!a.empty())
            {
                ans = max(ans, i-a.top());
            } else {
                a.push(i);
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        Ngoac_Dai_Nhat(s);
    }
    return 0;
}