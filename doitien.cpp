#include<bits/stdc++.h>
using namespace std;
int n;
int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
void Doi_Tien()
{
    int min = 0;
    for(int i = 0; i < 10; i++)
    {
        min += n/a[i];
        n %= a[i];
    }
    cout << min << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        Doi_Tien();
    }
    return 0;
}
