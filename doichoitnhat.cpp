// Sau mỗi vòng lặp đưa số nhỏ nhất lên 
#include<bits/stdc++.h>
using namespace std;

int n, a[1005];
void Swap_Min()
{
    int dem = 0;
    for(int i = 0; i < n-1; i++)
    {
        int x = i;
        int min1 = a[i];
        for(int j = i+1; j < n; j++)
        {
            if(a[j] < min1)
            {
                min1 = a[j];
                x = j;
            }
        }
        swap(a[i], a[x]);
        if(x != i) dem++;
    }
    cout << dem << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Swap_Min();
    }
    return 0;
}