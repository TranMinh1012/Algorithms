#include<bits/stdc++.h>
using namespace std;

long long n, a[1000000];
void Sap_Xep()
{
    long long ind1=0, ind2=0;
    for(int i = 1; i <= n; i++)
    {
        if(a[i] > a[i+1])
        {
            ind1 = i;
            break;
        }
    }
    for(int j = n; j > ind1; j--)
    {
        if(a[j] < a[j-1])
        {
            ind2 = j;
            break;
        }
    }
    for(int i = 1; i < ind1; i++)
    {
        for(int j = ind1; j <= ind2; j++)
        {
            if(a[i] > a[j])
            {
                ind1 = i;
                break;
            }
        }
    }
    for(int i = n; i > ind2; i--)
    {
        for(int j = ind1; j <= ind2; j++)
        {
            if(a[i] < a[j])
            {
                ind2 = i;
                break;
            }
        }
    }
    cout << ind1 << " " << ind2 << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        Sap_Xep();
    }
    return 0;
}