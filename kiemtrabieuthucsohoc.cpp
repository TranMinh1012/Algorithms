#include<bits/stdc++.h>
using namespace std;

void Kiem_Tra(string s)
{
    bool check;
    stack <char> a;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != ')')
        {
            a.push(s[i]);
        } else {
            check = true;
            char t = a.top();
            a.pop();
            while(t != '(')
            {
                if(t=='+' || t=='-' || t=='*' || t=='/')
                {
                    check = false;
                }
                t = a.top();
                a.pop();
            
            }
            if(check)
            {
                break;
            }
        }
    }
    if(check)
    {
        cout << "Yes";
    } else {
        cout << "No";
    }
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin, s);
        Kiem_Tra(s);
        cout << endl;
    }
    return 0;
}