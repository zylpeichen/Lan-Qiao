/*#include<bits/stdc++.h> 
using namespace std;

int main()
{
	int n,sum;
	int a,b,c,d;
	cin>>n;
	a = n%10*1;
	b = (n%100)/10*9;
	c = (n%1000)/100*9*9;
	d = (n%10000)/1000*9*9*9;
	sum = a+b+c+d;
	cout<<sum;
	return 0;
}*/

//�ڶ��ַ�����2022(9) = 2*9*9*9 + 0*9*9 + 2*9 + 2*1
//					  = (2*9*9 + 0*9 + 2)*9 + 2
//					  = [(2*9 + 0)*9 + 2]*9 + 2
//  ���Ǻ����׿������ɣ�[��ǧλ��9+��λ����9+ʮλ]��9+��λ
#include<bits/stdc++.h> 
using namespace std;
int main()
{
	string s ="2022";
	int a= 0;
	for(int i=0;i<s.size();i++)
	{
		a= a*9+s[i]-'0';
	}
	cout<<a;
	return 0;
}
