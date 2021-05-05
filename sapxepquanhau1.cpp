#include<bits/stdc++.h>
using namespace std;
int n, dem;
bool cot[100], xuoi[100], nguoc[100];
void Tim_hau(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(cot[j] && xuoi[i+j-1] && nguoc[i-j+n])
        {
            cot[j] = false;
            xuoi[i+j-1] = false;
            nguoc[i-j+n] = false;
            if(i==n)
            {
                dem++;
            }
            else{
                Tim_hau(i+1);
            }
            cot[j] = true;
            xuoi[i+j-1] = true;
            nguoc[i-j+n] = true;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        dem = 0;
        for(int i = 1; i <= n; i++)
        {
            cot[i] = true;
        }
        for(int i = 1; i <= 2*n-1; i++)
        {
            xuoi[i] = true;
            nguoc[i] = true;
        }
        Tim_hau(1);
        cout << dem << endl;
    }
    return 0;
}