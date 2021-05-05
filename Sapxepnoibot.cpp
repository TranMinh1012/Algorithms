#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k = 1;
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-1; j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
                k = 0;
            }
        }
        if(k==1) break;
        cout << "Buoc " << i+1 << ": ";
        for(int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl << endl;
        k = 1;
    }
    return 0;
}