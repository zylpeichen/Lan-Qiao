#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
	cin >> n;
	int m = 0;
	while (n)
	{
		m = m * 10 + n % 10;
		n = n / 10; 
		
	}
	cout << m << endl;
	return 0;
 } 
 
 //·½·¨¶þ
 #include<bits/stdc++.h>
 using namespace std;
 
 int main ()
 {
 	string s;
 	cin >> s;
 	bool a = s[0] == '-';
 	if(a)
 		s.erase(s.begin());
	reverse(s.begin(),s.end()); 
	int k = 0;
	while (k + 1 < s.size() && s[k] == '0')
	k++;
	if (a)
	cout   << '-';
	cout << s.substr(k) << endl;
	return 0;
  } 
