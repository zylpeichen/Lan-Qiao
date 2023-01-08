/*
题目描述

本题为填空题，只需要算出结果后，在代码中使用输出语句将所填结果输出即可。

5 只猴子是好朋友，在海边的椰子树上睡着了。这期间，有商船把一大堆香蕉忘记在沙滩上离去。

第 1 只猴子醒来，把香蕉均分成 5 堆，还剩下 1 个，就吃掉并把自己的一份藏起来继续睡觉。

第 2 只猴子醒来，把香蕉均分成 5 堆，还剩下 2 个，就吃掉并把自己的一份藏起来继续睡觉。

第 3 只猴子醒来，把香蕉均分成 5 堆，还剩下 3 个，就吃掉并把自己的一份藏起来继续睡觉。

第 4 只猴子醒来，把香蕉均分成 5 堆，还剩下 4 个，就吃掉并把自己的一份藏起来继续睡觉。

第 5 猴子醒来，重新把香蕉均分成 5 堆，哈哈，正好不剩！

请计算一开始最少有多少个香蕉。
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int i = 1;
	while(1) {
		int j = i;
		if (j % 5 == 1) j = j - j / 5 - 1;
		else {
			i ++;
			continue;
		}
		if (j % 5 == 2) j = j - j / 5 - 2;
		else {
			i ++;
			continue;
		}
		if (j % 5 == 3) j = j - j / 5 - 3;
		else {
			i ++;
			continue;
		}
		if (j % 5 == 4) j = j - j / 5 - 4;
		else {
			i ++;
			continue;
		}
		if (j % 5 == 0 && j >= 5) break;
		else i ++;
	}
	cout << i;
	return 0;
}
