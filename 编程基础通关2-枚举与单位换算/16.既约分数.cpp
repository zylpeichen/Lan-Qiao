/*
题目描述

本题为填空题，只需要算出结果后，在代码中使用输出语句将所填结果输出即可。

如果一个分数的分子和分母的最大公约数是 11，这个分数称为既约分数。

例如 3/4, 1/8, 7/1， 都是既约分数。

请问，有多少个既约分数，分子和分母都是 1 到 2020 之间的整数（包括 1 和 2020)？
*/
#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)   //求最大公约数 
{
	if (b == 0) return a;
	else return gcd(b,a % b);
}
int main()
{
	int m = 0;
	for (int i = 1; i <= 2020; i++){
		for (int j = 1; j <= 2020; j++) {
			if (gcd(i,j) == 1) m++;
		}
	}
	cout << m;
	return 0; 
}
