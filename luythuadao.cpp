#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;
long long dao (long long n){
	long long k = 0;
	while (n != 0){
		k = k*10 + n%10;
		n = n/10;
	}
	return k;
}

long long power (long long n, long long k){
	if (k == 0) return 1;
	long long x = power (n,k/2);
	if(k%2==0) return x*x%mod;
	return n*(x*x%mod) % mod;
}

int main (){
	int t;
    cin >> t;
	while (t--){
		long long n; 
        cin >> n;
		long long k = dao (n);
		cout << power (n, k) << endl;
	}
	return 0;
}