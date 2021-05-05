#include<bits/stdc++.h>
using namespace std;

void Next_Binary(string X)
{
    int n = X.length();
    int i = n-1;
    while(i>=0 && X[i] == '1')
    {
        X[i] = '0';
        i--;
    }
    if(i>=0) X[i] = '1';
    for(int i = 0; i < X.length(); i++)
    {
            cout << X[i];
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string X;
        cin >> X;
        Next_Binary(X);
    }
    return 0;
}