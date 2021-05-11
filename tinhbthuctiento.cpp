#include<bits/stdc++.h>
using namespace std;

void Value_Prefix(string s)
{
    stack <long long> a;
    for(int i = s.length()-1; i >= 0; i--)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            a.push((long long)(s[i]-'0'));
        } else {
            long long fir = a.top(); a.pop();
            long long sec = a.top(); a.pop();
            long long tmp;
            switch(s[i])
            {
                case '+':
                    tmp = fir + sec;
                    break;
                case '-':
                    tmp = fir - sec;
                    break;
                case '*':
                    tmp = fir * sec;
                    break;
                case '%':
                    tmp = fir % sec;
                    break;
                case '/':
                    tmp = fir / sec;
                    break;
                case '^':
                    tmp = fir;
                    for(int i = 0; i < sec-1; i++)
                    {
                        tmp *= fir;
                    }
                    break;
            }
            a.push(tmp);
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
        Value_Prefix(s);
    }
    return 0;
}