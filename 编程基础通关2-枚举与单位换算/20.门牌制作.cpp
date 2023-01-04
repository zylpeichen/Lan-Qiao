/*
题目描述

本题为填空题，只需要算出结果后，在代码中使用输出语句将所填结果输出即可。

小蓝要为一条街的住户制作门牌号。

这条街一共有 2020 位住户，门牌号从 1 到 2020 编号。

小蓝制作门牌的方法是先制作 0 到 9 这几个数字字符，最后根据需要将字符粘贴到门牌上，
例如门牌 1017 需要依次粘贴字符 1、0、1、7,即需要 1 个字符 0，2 个字符 1，1 个字符 7。

请问要制作所有的 1 到 2020 号门牌，总共需要多少个字符 2？
*/ 

// 方法一 
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int m = 0;
	for (int i = 1; i <= 2020; i++) {
		for (int j = i; j > 0; j = j / 10) {
			if (j % 10 == 2) m++;
		}
	}
	cout << m;
	return 0;
}

// 方法二
#include <bits/stdc++.h>
using namespace std;

int get(int x) 
{
	int m = 0;
	while (x) {
		if (x % 10 == 2) m++;
		x /= 10;
	}
	return m;
}
int main ()
{
	int ans = 0;
	for (int i = 0; i <= 2020; i++) {
		ans += get(i);
	}
	cout << ans;
	return 0;
 } 

 // 方法三
 #include <bits/stdc++.h>
 using namespace std;
 
 int main()
 {
 	int x,sum = 0;
 	for (int i = 1; i <= 2020; i++) {
 		string str;
 		char s[5];
 		sprintf(s,"%d",i);  // 将 i 以 %d 的格式存在 s 中 
 		str.assign(s);   // 将 s 复制给 str 
 		sum += count(str.begin(),str.end(),'2');   // 从 str 的开始到末尾查询有 2 的次数 
	 }
	 cout << sum;
	 return 0;
  } 
