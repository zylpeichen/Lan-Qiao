#include <bits/stdc++.h>
using namespace std;

int main()
{
	int long long n,m;
	cin >> n;
	m = n*1024*1024*8;
	m = m / 32;
	cout << m;
}

// 1MB = 1024KB    1KB = 1024B   1B = 8b
