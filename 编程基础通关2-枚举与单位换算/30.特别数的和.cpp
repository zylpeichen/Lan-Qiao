/*
题目描述

小明对数位中含有 2、0、1、9 的数字很感兴趣（不包括前导 0），在 1 到 40 中这样的数包括 1、2、9、10 至 32、39 和 40，共 28 个，他们的和是 574。

请问，在 1 到 nn 中，所有这样的数的和是多少？

输入描述
输入格式：
输入一行包含两个整数 n（1≤n≤104）。

输出描述
输出一行，包含一个整数，表示满足条件的数的和。

输入输出样例
示例
    输入
40
    输出
574
*/

#include <bits/stdc++.h>
using namespace std;

bool check (int x)
{
	while (x) {
		if (x % 10 == 2 || x % 10 == 0 || x % 10 == 1 || x % 10 == 9) return true;
		x /= 10;
	}
	return false;
}
int main()
{
	int n;
	cin >> n;
	int ans = 0; 
	for (int i = 1; i <= n; i++) {
		if (check(i)) ans += i;
		}
	cout << ans;
	return 0;
}
