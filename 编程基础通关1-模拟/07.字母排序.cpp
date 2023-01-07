
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s = "WHERETHEREISAWILLTHEREISAWAY";
	sort(s.begin(),s.end());
// sort 函数,语法sort(start,end,cmp)
//start 起始位置;end 结束位置;cmp 排序方法,升序or降序,可不填 
	cout << s << endl;
	return 0;
}

