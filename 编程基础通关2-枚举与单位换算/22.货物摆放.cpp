/*
题目描述

小蓝有一个超大的仓库，可以摆放很多货物。

现在，小蓝有 n 箱货物要摆放在仓库，每箱货物都是规则的正方体。小
蓝规定了长、宽、高三个互相垂直的方向，每箱货物的边都必须严格平行于长、宽、高。

小蓝希望所有的货物最终摆成一个大的长方体。
即在长、宽、高的方向上分别堆 L、W、H 的货物,满足 n=L×W×H。

给定 n，请问有多少种堆放货物的方案满足要求。

例如，当 n=4 时，有以下 6 种方案：
1×1×4、1×2×2、1×4×1、2×1×2、2×2×1、4×1×1。

请问，当 n=2021041820210418（注意有 1616 位数字）时，总共有多少种方案？

提示：建议使用计算机编程解决问题。
*/


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e6 + 10;
ll f[N];

int main()
{
	ll n = 2021041820210418;
	int m = 0;
	for (ll i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			f[m++] = i;
		if (i != n / i) f[m++] = n / i;
		}
	}
	int ans = 0;
	for (int a = 0; a < m; a++)
		for (int b = 0; b < m; b++) {
				if (f[a] * f[b] > n) continue;
			for (int c = 0; c < m; c++) {
				if (f[a] * f[b] * f[c] == n && a != b != c) ans++;
		}
			}
	cout << ans;
	return 0;
}
