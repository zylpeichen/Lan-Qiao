/*
��Ŀ����

2020 �괺���ڼ䣬��һ����������������˴�ҵ�ע�⣺2020 �� 2 �� 2 �ա�
��Ϊ�����������ڰ� ��yyyymmdd�� �ĸ�ʽд��һ�� 8 λ���� 20200202��ǡ����һ�������������ǳ������������ǻ������ڡ�

���˱�ʾ 20200202 �� ��ǧ��һ���� ���������ӡ��Դ�С���ܲ���ͬ����Ϊ���� 2 ��֮�������һ���������ڣ�20211202 �� 2021 �� 12 �� 2 �ա�

Ҳ���˱�ʾ 20200202 ����������һ���������ڣ�����һ�� ABABBABA �͵Ļ������ڡ�
�Դ�С��Ҳ����ͬ����Ϊ��Լ 100 ������������һ�� ABABBABA �͵Ļ������ڣ�21211212 
�� 2121 �� 12 �� 12 �ա��㲻�� ��ǧ��һ������������ ��ǧ����������

����һ�� 8 λ�������ڣ�������������֮����һ���������ں���һ�� ABABBABA �͵Ļ������ڸ�����һ�졣

��������
�������һ����λ���� NN����ʾ���ڡ�
������������������10000101��N��89991231����֤ N ��һ���Ϸ����ڵ� 8 λ����ʾ��

�������
������У�ÿ�� 1 ����λ������һ�б�ʾ��һ���������ڣ��ڶ��б�ʾ��һ�� ABABBABA �͵Ļ������ڡ�

�����������
ʾ��
    ����
20200202

    ���
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



