#include<bits/stdc++.h>
using namespace std;

void Value_Postfix(string s)
{
    stack <long long> a;
    for(int i = 0; i < s.length(); i++)
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
                    tmp = sec + fir;
                    break;
                case '-':
                    tmp = sec - fir;
                    break;
                case '*':
                    tmp = sec * fir;
                    break;
                case '%':
                    tmp = sec % fir;
                    break;
                case '/':
                    tmp = sec / fir;
                    break;
                case '^':
                    tmp = sec;
                    for(int i = 0; i < fir-1; i++)
                    {
                        tmp *= sec;
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
        Value_Postfix(s);
    }
    return 0;
}