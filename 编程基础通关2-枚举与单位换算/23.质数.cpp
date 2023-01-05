/*
题目描述

本题为填空题，只需要算出结果后，在代码中使用输出语句将所填结果输出即可。

我们知道第一个质数是 2、第二个质数是 3、第三个质数是 5……

请你计算第 2019 个质数是多少？
*/

// 方法一：自写
#include <bits/stdc++.h>
using namespace std;
const int n = 2020;
int s[n];

int main ()
{
	int m = 1; // m 从 1 开始是默认 数组 s[1] = 2
	for (int i = 3; m <= 2019; i++) {  // 直接从质数 3 开始，直到 m 到 2019 
		for (int j = 2; j < i; j++) {  // 循环用来判断 i 是否是质数 
			if (i % j != 0 && i - 1 == j) {  //如果 i 对 j 取余不是 0，并且 i - 1 = j 
				s[++m] = i;		//则判断出 i 是质数并且加到数组 s 当中 
				break;  //直接跳出循环体 
			}
			if (i % j == 0) break;  // 如果存在 i 对 j 取余是 0，则就不是质数，直接退出循环体 
		}
	}
	cout << s[2019];
	return 0;
}


//方法二：试除法判断质数——数论
#include <bits/stdc++.h>
using namespace std;

bool is_prime(int x)
{
	for (int i = 2; i <= x / i; ++i) {
		if (x % i == 0) return false;
	}	
		return true;
	
 } 
 
 int main() 
 {
 	int k = 2, cnt = 0;
 	while (true) {
 		if (is_prime(k))
 		cnt++;
 		if (cnt == 2019)
 		break;
 		k++;
	 }
	 cout << k;
	 return 0;
 }
