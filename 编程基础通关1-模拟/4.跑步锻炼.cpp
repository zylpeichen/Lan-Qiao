/*
#include<bits/stdc++.h>
using namespace std;

 int is_leap(int y)
 {
 	return y % 400 == 0 || y % 4 == 0 && y % 100 != 0;
 }
 
 int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31}; 
 
 int dayofmonth(int y,int m)
 {
 	if(m == 2)
 	return is_leap(y) + 28;
 	return days[m];
 }
 
 int main()
 {
 	int y = 2000,m = 1,d = 1,w = 6;
 	int res = 0;
 	while(y != 2020 || m != 10 || d != 2)
 	{
 		if (d == 1 || w == 1)
 			res += 2;
 		else 
 			res ++;
 		w ++;
 		if(w == 8)
 			w = 1;
 		d ++;
 		if(d > dayofmonth(y,m))
 		{
 			d = 1,m ++;
 			if(m == 13)
 				m = 1,y++;
		 }
	 }
	cout << res << endl;
	return 0;
 }
 */
 
 
 
 
 #include<iostream>
 using namespace std;
 
 int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
 
 int is_leap(int y)
 {
 	return y % 400 == 0 || y % 100 != 0 && y % 4 == 0; 
 }
 
 int dayofmonth(int y,int m)
 {
 	if (m == 2)
 		return 28 + is_leap(y);
 	else 
	 	return days[m];
}

int main()
{
	int y = 2000,m = 1,d = 1,w = 6;
	int res = 0;
	while(y != 2020 || m != 10 || d != 2)
	{
		if(w == 1 || d == 1)
			res += 2;
		else
			res ++;
		w ++;
		if(w == 8)
			w = 1;
		d ++;
		if(d > dayofmonth(y,m))
		
			d = 1,m ++;
			if(m == 13)
				m = 1,y ++;
		
		
	}
	cout << res << endl;
	return 0;
}
