/*
#include<iostream>
using namespace std;

int main()
{
	int a,b,n;
	cin >> a >> b >> n;
	int cnt = 0,w = 1;
	while (n > 0)
	{
		if (w <= 5)
			n -= a;
		else 
			n -= b;
		w++;
		if(w == 8)
			w = 1;
		cnt ++;
	}
	cout << cnt << endl;
	return 0;
}
*/

// 我们发现运行的时候超时了 ，我们看条件，发现有的用例非常大
// 我们要对算法进行优化

#include <iostream>
using namespace std;
typedef long long LL;

int main()
{
	LL a,b,n;
	cin >> a >> b >> n;
	LL num = 5 * a + 2 * b;
	LL ans = n / num * 7;
	n = n % num;
	for (int i = 1;i <= 5; i++)
	{
		if(n <= 0) break;
		ans++;
		n -= a;
	}
	for (int i = 1;i <= 2;i++)
	{
		if(n <= 0) break;
		ans++;
		n -= b;
	}
	cout << ans << endl;
	return 0;
}










 
