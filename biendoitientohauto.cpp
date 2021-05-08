#include<bits/stdc++.h>
using namespace std;

void Prefix_Postfix(string s)
{
    stack <string> a;
    for(int i = s.length()-1; i >= 0; i--)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            a.push(string(1,s[i]));
        } else {
            string fir = a.top(); a.pop();
            string sec = a.top(); a.pop();
            a.push( fir + sec + s[i] );
        }
    }
    cout << a.top() << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        Prefix_Postfix(s);
    }
    return 0;
}