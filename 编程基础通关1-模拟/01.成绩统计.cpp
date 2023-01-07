#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,x,cnt1=0,cnt2=0;
	int ratio1,ratio2;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		if(x>=60) cnt1++;
		if(x>=85) cnt2++;
	}
	/*ratio1=1.0*cnt1/n*100;
	ratio2=1.0*cnt2/n*100;
	cout<<ratio1<<"%"<<endl;
	cout<<ratio2<<"%"<<endl;*/
	cout<< setprecision(0) << fixed<<(1.0*cnt1/n*100)<<"%\n"<<(1.0*cnt2/n*100)<<"%\n";
	return 0;
}
