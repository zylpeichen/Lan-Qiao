#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a = 1189,b = 841;
	char c;int x;
	cin >> c >> x;
	while (x--)
	{
		a /= 2;
		if(a < b)  swap(a,b);
	}
	cout << a << endl;
	cout << b << endl;
	return 0;
}
