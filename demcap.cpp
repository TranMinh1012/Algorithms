#include<bits/stdc++.h>
using namespace std;
// x^y > y^x => y > x trừ một só trường hợp đặc biệt (*)
long long count(int x, int y[], int m, int z[]) // Hàm trả về số cặp thỏa mãn bài toán với x là một phần từ của cặp
{
    if(x == 0) return 0;
    if(x == 1) return z[0];
    int* ind = upper_bound(y, y+m, x); // upper_bound () nhận được địa chỉ của phần tử lớn hơn đầu tiên trong Y [0..m-1] 
    long res = (y+m) - ind; // số ptu trong y[] lớn hơn x
    res += z[0] + z[1]; // nếu tính đc res nghĩa là x > 1 thì nếu y=0 hoặc y = 1 thì x^y luôn > y^x
    if(x==2)
    {
        res -= z[3] + z[4]; // không thỏa mãn (*) nên trừ đi
    }
    if(x==3)
    {
        res += z[2]; // có thỏa mãn (*) nên cộng vào
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int x[n], y[m];
        for(int i = 0; i < n; i++) cin >> x[i];
        int z[10] = {0}; // Mảng z[] đếm số lần xuất hiện của 0 1 2 3 4 trong mảng y[]
        for(int j = 0; j < m; j++)
        {
            cin >> y[j];
            if(y[j] < 5) z[y[j]]++;
        }
        sort(y, y+m);
        long ans = 0;
        for(int i = 0; i < n; i++)
        {
            ans += count(x[i], y, m, z);
        }
        cout << ans << endl;
    }
    return 0;
}