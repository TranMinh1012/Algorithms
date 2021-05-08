#include<bits/stdc++.h>
using namespace std;

void Prefix_Infix(string s)
{
    stack <string> a;
    for(int i = s.length()-1; i>=0; i--)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            a.push(string(1,s[i]));
        } else {
            string fir = a.top();
            a.pop();
            string sec = a.top();
            a.pop();
            a.push( "(" + fir + s[i] + sec + ")" );
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
        Prefix_Infix(s);
    }
    return 0;
}