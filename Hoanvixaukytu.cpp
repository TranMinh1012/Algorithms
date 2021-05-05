#include<bits/stdc++.h>
using namespace std;
string x;
int a[100];
bool chuaxet[100];
void Try(int i)
{
    for(int j = 0; j < x.length(); j++)
    {
        if(chuaxet[j])
        {
            a[i] = j;
            chuaxet[j] = false;
            if(i == x.length())
            {
                for(int k = 1; k <= x.length(); k++)
                {
                    cout << x[a[k]];
                }
                cout << " ";
            } else {
                Try(i+1);
            }
            chuaxet[j] = true;
        }
    }
}               
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> x;
        for(int i = 0; i < x.length(); i++)
        {
            chuaxet[i] = true;
        }
        Try(1);
        cout << endl;
    }
    return 0;
}
