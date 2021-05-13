#include<bits/stdc++.h>
using namespace std;

void So_Loc_Phat_1(int n)
{
    queue <long long> q;
    vector <long long> v;
    q.push(6);
    q.push(8);
    while(q.front() < pow(10,n))
    {
        long long tmp = q.front();
        v.push_back(tmp);
        q.push(tmp*10+6);
        q.push(tmp*10+8);
        q.pop();
    }
    for(int i = v.size()-1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        So_Loc_Phat_1(n);
    }
    return 0;
}