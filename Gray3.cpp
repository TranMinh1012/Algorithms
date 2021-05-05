// so sanh canh ben
#include<bits/stdc++.h>
using namespace std;
void Gray_3(string a)
{
    string b;
    b.push_back(a[0]);
    for(int i = 0; i < a.length()-1; i++)
    {
        if(a[i] != a[i+1])
        {
            b.push_back('1');
        } else {
            b.push_back('0');
        }
    }
    cout << b << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a;
        cin >> a;
        Gray_3(a);
    }
    return 0;
}