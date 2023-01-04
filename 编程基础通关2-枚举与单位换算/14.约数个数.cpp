#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n = 1200000;
	int m = 0;
	for (int i = 1;i <= 1200000;i++) {
		if(n % i == 0) m++;
	}
	cout << m;
	return 0;
}
