#include <bits/stdc++.h>
using namespace std;

int main ()
{
	string tiangan[] = {"geng","xin","ren","gui","jia","yi","bing","ding","wu","ji"},
	dizhi[] = {"shen", "you", "xu", "hai", "zi", "chou", "yin", "mao", "chen", "si", "wu", "wei"};
	int n;
	cin >> n;
	cout << tiangan[n % 10] << dizhi[n % 12] << endl;
	return 0;
}
