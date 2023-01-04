#include <bits/stdc++.h>
using namespace std;

int main ()
{
	char a[10];
	scanf("%c-%c%c%c-%c%c%c%c%c-%c",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);
	int sum = 0;
	for(int i = 0;i < 9; i++){
		sum += (a[i] - '0') * (i + 1); 
	}
	sum = sum % 11;
	if (sum == 10 && a[9] == 'X' || a[9] - '0' == sum)
	puts("Right");
	else{
		if (sum == 10)
			a[9] = 'X';
		else a[9] = sum + '0';
		printf("%c-%c%c%c-%c%c%c%c%c-%c\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
	}
	return 0;
}

//·½·¨¶þ

#include <bits/stdc++.h>
using namespace std;

int main ()
{
	string s;
	cin >> s;
	int sum = 0,k = 1;
	for (int i = 0;i + 1 < s.size();i++){
		if (s[i] != '-')
			sum += (s[i] -'0') * k,k++;
	}
	sum %= 11;
	char c = 'X';
	if (sum < 10)
	c = sum +'0';
	if (s.back() == c)
	puts("Right");
	else{
		s.back() = c;
		cout << s << endl;
	}
	return 0;
 } 
