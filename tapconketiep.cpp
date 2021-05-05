#include<bits/stdc++.h>
using namespace std;
int N, K, X[1000];
void Sinh()
{
    int i = K;
    while(X[i] == N-K+i){i--;}
    if(i != 0){
        X[i]++;
        int p = X[i];
        while(i <= K){X[i++] = p++;}
    } else {
        for(int i = 1; i <= K; i++)
        {
            X[i] = i;
        }
    }
    for(int i = 1; i <= K; i++)
    {
        cout << X[i] << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> N >> K;
        for(int i = 1; i <= K; i++)
        {
            cin >> X[i];
        }
        Sinh();
    }
    return 0;
}