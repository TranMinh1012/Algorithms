#include<bits/stdc++.h>
using namespace std;
int N, X[1000];
void Sinh()
{
    int i = N-1;
    while(X[i] > X[i+1] && i>0)
    {
        i--;
    }
    if(i != 0)
    {
        int k = N;
        while(X[i] > X[k])
        {
            k--;
        }
        swap(X[i], X[k]);
        int l = i+1, r = N;
        while(l < r)
        {
            swap(X[l], X[r]);
            l++; r--;
        }
    } else {
        for(int i = 1; i <= N; i++)
        {
            X[i] = i;
        }
    }
    for(int i = 1; i <= N; i++)
    {
        cout << X[i] << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> N;
        for(int i = 1; i <= N; i++)
        {
            cin >> X[i];
        }
        Sinh();
    }
    return 0; 
}