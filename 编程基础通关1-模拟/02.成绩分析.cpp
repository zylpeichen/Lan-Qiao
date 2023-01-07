/*#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,x,MAX=0,MIN=100,grade=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		if(x>MAX) MAX=x;	
		if(x<MIN) MIN=x;
		grade = x+grade;
	}
	cout<< MAX << endl << MIN<<setprecision(2)<<fixed<< endl<< (1.0*grade/n)<< endl;
	return 0;
 } */
 
 #include<bits/stdc++.h>
 using namespace std;
 const int N=1000000;
 int main()
 {
 	int n,sum=0,max=0,min=100,a[N];
 	double avg;
	 cin >> n;
	 for(int i=1;i<=n;i++)
	 {	
	 	cin >> a[i];
	 	sum+=a[i];
	 	if(a[i]>max) max =a[i];
	 	if(a[i]<min) min = a[i];
	 	
	 }
 	cout<< max<< endl<< min << endl;
 	avg=1.0*sum/n;
	//avg=round(avg*100)/100;
	//printf("%.2lf\n",avg);
	cout<<setprecision(2)<<fixed<<avg<<endl;
	return 0;
 }
