/*
题目描述

2020 年春节期间，有一个特殊的日期引起了大家的注意：2020 年 2 月 2 日。
因为如果将这个日期按 “yyyymmdd” 的格式写成一个 8 位数是 20200202，恰好是一个回文数。我们称这样的日期是回文日期。

有人表示 20200202 是 “千年一遇” 的特殊日子。对此小明很不认同，因为不到 2 年之后就是下一个回文日期：20211202 即 2021 年 12 月 2 日。

也有人表示 20200202 并不仅仅是一个回文日期，还是一个 ABABBABA 型的回文日期。
对此小明也不认同，因为大约 100 年后就能遇到下一个 ABABBABA 型的回文日期：21211212 
即 2121 年 12 月 12 日。算不上 “千年一遇”，顶多算 “千年两遇”。

给定一个 8 位数的日期，请你计算该日期之后下一个回文日期和下一个 ABABBABA 型的回文日期各是哪一天。

输入描述
输入包含一个八位整数 NN，表示日期。
对于所有评测用例，10000101≤N≤89991231，保证 N 是一个合法日期的 8 位数表示。

输出描述
输出两行，每行 1 个八位数。第一行表示下一个回文日期，第二行表示下一个 ABABBABA 型的回文日期。

输入输出样例
示例
    输入
20200202

    输出
20211202
21211212
*/

#include <bits/stdc++.h>
using namespace std;

int day[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

bool checkleapyear (int x) {
	if (x % 400 == 0 || (x % 100 != 0 && x % 4 == 0)) return true;
	return false;
}

bool checkABABBABAtype (string x) {
	if (x[0] == x[2] && x[0] == x[5] && x[0] == x[7] && x[1] == x[3] && x[1] == x[4] && x[1] == x[6]) return true;
  return false;
} 

int main()
{
	string S, ans1 = "", ans2 = "";
	string s, t, year;
	int y, m, d, i;
	cin >> S;
	year = S.substr(0,4);
	for (i = stoi(year); ans1 == "" || ans2 == ""; i++) {
		s = to_string(i); 
		t = to_string(i);
		reverse (t.begin(),t.end());
		s += t;
		if(s <= S) continue;
		y = stoi(s.substr(0,4)), m = stoi(s.substr(4,2)), d = stoi(s.substr(6,2));
		if (checkleapyear(y)) day[2] = 29; else day[2] = 28;
		if (m < 1 || m > 12) continue;
		if (d < 1 || d > day[m]) continue;
		if (ans1 == "") ans1 = s;
		if (checkABABBABAtype(s) && ans2 == "") ans2 = s; 
	}
	cout << ans1 << endl << ans2;
	return 0;
}



