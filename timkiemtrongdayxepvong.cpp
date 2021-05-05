#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		long long n, x;
		cin>>n>>x;
		long long a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int value=0;
		for(int i=0;i<n;i++){
			if(a[i]==x){
				value=i+1;
				break;
			}
		}
		cout<<value<<endl;
	}
	return 0;
}