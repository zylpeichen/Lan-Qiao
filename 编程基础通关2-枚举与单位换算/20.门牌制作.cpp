/*
��Ŀ����

����Ϊ����⣬ֻ��Ҫ���������ڴ�����ʹ�������佫������������ɡ�

С��ҪΪһ���ֵ�ס���������ƺš�

������һ���� 2020 λס�������ƺŴ� 1 �� 2020 ��š�

С���������Ƶķ����������� 0 �� 9 �⼸�������ַ�����������Ҫ���ַ�ճ���������ϣ�
�������� 1017 ��Ҫ����ճ���ַ� 1��0��1��7,����Ҫ 1 ���ַ� 0��2 ���ַ� 1��1 ���ַ� 7��

����Ҫ�������е� 1 �� 2020 �����ƣ��ܹ���Ҫ���ٸ��ַ� 2��
*/ 

// ����һ 
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

// ������
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

 // ������
 #include <bits/stdc++.h>
 using namespace std;
 
 int main()
 {
 	int x,sum = 0;
 	for (int i = 1; i <= 2020; i++) {
 		string str;
 		char s[5];
 		sprintf(s,"%d",i);  // �� i �� %d �ĸ�ʽ���� s �� 
 		str.assign(s);   // �� s ���Ƹ� str 
 		sum += count(str.begin(),str.end(),'2');   // �� str �Ŀ�ʼ��ĩβ��ѯ�� 2 �Ĵ��� 
	 }
	 cout << sum;
	 return 0;
  } 
