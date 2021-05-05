#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int j;
    for(int i = 0; i < n; i++)
    {
        int k = a[i]; // giu lai gia tri a[i]
        j = i-1;
        while(j >= 0 && a[j] > k) // so sanh gia tri can chen voi lan luot cac gia tri khoa
        {
            a[j+1] = a[j]; // day lui gia tri a[j] ve sau mot vi tri, tao ra khoang trong tai vi tri j
            j--;
        }
        a[j+1] = k; // dua gia tri chen vao khoang trong moi tao ra
        cout << "Buoc " << i << ": ";
        for(int j = 0; j <= i; j++)
        {
            cout << a[j] << " ";
        }
        cout << endl << endl;
    }
    return 0;
}