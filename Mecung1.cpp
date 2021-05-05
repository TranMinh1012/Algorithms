#include<bits/stdc++.h>
using namespace std;

int n, a[100][100];
vector<string> result;
bool check = false;
void Try(int i, int j, string s)
{
    if(i==1 && j==1 && a[i][j]==0)
    {
        check = false;
        return;
    }
    if(i==n && j==n && a[n][n]==1)
    {
        result.push_back(s);
        check = true;
        return;
    }
    if(i<n && a[i+1][j]==1)
    {
        Try(i+1, j, s+"D");
    }
    if(j<n && a[i][j+1]==1)
    {
        Try(i, j+1, s+"R");
    }
    if( (i<n && j<n && a[i+1][j]==0 && a[i][j+1]==0) || i>n || j>n )
    {
        return;
    }
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
            for(int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
            }
        }
        result.clear();
        check = false;
        Try(1, 1, " ");
        if(!check)
        {
            cout << -1;
        } else {
            sort(result.begin(), result.end());
            for(int i = 0; i < result.size(); i++)
            {
                cout << result[i];
            }
        }
        cout << endl;
    }
    return 0; 
}