#include<bits/stdc++.h>
using namespace std;
void Nham_Chu_So(string a, string b)
{
    int min1=0, min2=0, max1=0, max2=0;
    for(int i = 0; i < a.length(); i++)
    {
        min1 = min1 * 10 + (a[i]-'0');
        if(a[i] == '6')
        {
            min1--;
        }
        max1 = max1 * 10 + (a[i]-'0');
        if(a[i] == '5')
        {
            max1++;
        }
    }
    for(int i = 0; i < b.length(); i++)
    {
        min2 = min2 * 10 + (b[i]-'0');
        if(b[i] == '6')
        {
            min2--;
        }
        max2 = max2 * 10 + (b[i]-'0');
        if(b[i] == '5')
        {
            max2++;
        }
    }
    cout << min1+min2 << " " << max1+max2;
}
int main()
{
    string a, b;
    cin >> a >> b;
    Nham_Chu_So(a, b);
    return 0;
}