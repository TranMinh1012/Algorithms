#include<bits/stdc++.h>
using namespace std;

void Bo_Sung(int a[], int n)
{
	sort(a, a+n);
	int count = 0;
	for(int i = 0; i < n-1; i++)
	{
		if(a[i] != a[i+1]){
			count += a[i+1] - a[i] - 1;
		}
	}
	cout << count;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		Bo_Sung(a, n);
		cout << endl;
	}
	return 0;
}