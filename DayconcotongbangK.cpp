    #include<bits/stdc++.h>
    using namespace std;
    int n, sum;
    int a[100], b[100];
    vector< vector<int> > result;
    void Init()
    {
        result.clear();
        cin >> n >> sum;
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a+1, a+n+1);
    }
    void Try(int i)
    {
        for(int j = 0; j <= 1; j++)
        {
            b[i] = j;
            if(i==n)
            {
                int k = 0;
                for(int t = 1; t <= n; t++)
                {
                    if(b[t]) k += a[t];
                }
                if(k == sum)
                {
                    vector<int> x;
                    for(int t = 1; t <= n; t++)
                    {
                        if(b[t]) x.push_back(a[t]);
                    }
                    result.push_back(x);
                }
            }
            else 
            {
                Try(i+1);
            }
        }
    }
    int main()
    {
        int t;
        cin >> t;
        while(t--)
        {
            Init();
            Try(1);
            if(result.size() == 0)
            {
                cout << -1 << endl;
            }
            else
            {
                sort(result.begin(), result.end());
                for(int i = 0; i < result.size(); i++)
                {
                    cout << "[";
                    for(int j = 0; j < result[i].size()-1; j++)
                    {
                        cout << result[i][j] << " ";
                    }
                    cout << result[i][result[i].size()-1] << "] ";
                }
                cout << endl;
            }
        }
        return 0;
    }