#include<bits/stdc++.h>
using namespace std;

void Tong_Day_Con(int a[], int n)
{
    bool check = false;
    int max;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] > 0) check = true;
        if(i == 0)
        {
            max = a[i];
        } else {
            if(max < a[i])
            {
                max = a[i];
            }
        }
    }
    if(!check)
    {
        cout << max << endl;
    } else {
        int sum = 0, result = 0;
        for(int i = 0; i < n; i++)
        {
            if(sum + a[i] < 0)
            {
                sum = 0;
                continue;
            }
            sum += a[i];
            if(result < sum)
            {
                result = sum;
            }
        }
        cout << result << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[100];
        Tong_Day_Con(a, n);
    }
    return 0;
}