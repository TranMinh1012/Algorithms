// so sánh chéo
#include<bits/stdc++.h>
using namespace std;
void Gray_2(string s)
{
    string a;
    a.push_back(s[0]);
    for(int i = 0; i < s.length()-1; i++)
    {
        if(a[i] == s[i+1])
        {
            a.push_back('0');
        } else {
            a.push_back('1');
        }
    }
    cout << a << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        Gray_2(s);
    }
    return 0;
}