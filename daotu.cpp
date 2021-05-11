#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main()
{
	int t;
	cin >> t;
	cin.ignore(); // Nếu nhập chuỗi có khoảng trống thì dùng
	while(t--)
	{
		string s;
		getline(cin, s);
		stack <string> a;
		char *b = new char[s.length()+1];
		char *p;
		strcpy(b, s.c_str()); // c_str() là chuyển string thành char*
		p = strtok(b, " ");
		while(p != NULL)
		{
			a.push(p);
			p = strtok(NULL, " ");
		}
		while(!a.empty())
		{
			cout << a.top() << " ";
			a.pop();
		}
		cout << endl;
	}
	return 0;
}
