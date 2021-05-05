/* Ý tưởng là tạo một mảng b[] lưu trữ các bit của một dãy nhị phân 
có độ dài bằng số phần tử của mảng a[]. Tính tổng tích của a[i] và b[i] 
nếu bằng tổng của bài toán thì in ra */
#include<bits/stdc++.h>
using namespace std;
int n, dem = 0, sum;
bool OK = true;
int a[100], b[100];
void Init()
{
    cin >> n >> sum;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++)
    {
        b[i] = 0;
    }
}
void Result()
{
    int k = 0;
    for(int i = 1; i <= n; i++)
    {
        k += a[i] * b[i];
    }
    if(k == sum)
    {
        dem++;
        for(int i = 1; i <= n; i++)
        {
            if(a[i] * b[i] != 0) // Hiểu đơn giản là b[i] = 1;
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
}
void Next_Bit() {
	int i = n;
	while (i>=0 && b[i] != 0) {
		b[i] = 0;
		i--;
	}
	if (i > 0) {
		b[i] = 1;
	}
	else OK = false;
}
int main()
{
    Init();
    while(OK)
    {
        Result();
        Next_Bit();
    }
    cout << dem << endl;
}