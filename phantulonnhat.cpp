#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int a[], int n)
{
    for(int i = 0; i <= n-1; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[j] < a[j+1])
            {
                swap(a[j], a[j+1]);
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int a[100];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bubbleSort(a, n);
        for(int i = 0; i < k; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}