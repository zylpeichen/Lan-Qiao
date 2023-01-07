/*
题目描述

本题为填空题，只需要算出结果后，在代码中使用输出语句将所填结果输出即可。

在平面直角坐标系中，两点可以确定一条直线。如果有多点在一条直线上， 那么这些点中任意两点确定的直线是同一条。

给定平面上 2 × 3 个整点(x,y)∣0≤x<2,0≤y<3,x∈Z,y∈Z，
即横坐标 是 0 到 1 (包含 0 和 1) 之间的整数、纵坐标是 0 到 2 (包含 0 和 2) 之间的整数 的点。这些点一共确定了 11 条不同的直线。

给定平面上 20×21 个整点 (x,y)∣0≤x<20,0≤y<21,x∈Z,y∈Z，
即横 坐标是 0 到 19 (包含 0 和 19) 之间的整数、纵坐标是 0 到 20 (包含 0 和 20 ) 之 间的整数的点。

请问这些点一共确定了多少条不同的直线。
*/
#include <bits/stdc++.h>
using namespace std;

struct Point {  // 定义结构体 为点坐标 
	double x,y;
}p[25 * 25];

map<pair<double,double>,int> line;   // 定义容器 map ，并把 斜率k 和截距b 存储在 pair 

int main ()
{
	int cnt = 0;
	int col = 20, row = 21;  // 横坐标 20，纵坐标 21 
	for (int i = 0; i < col; i++)  // 分别把横纵坐标放到 p 里面 
		for (int j = 0; j < row; j ++) {
			p[cnt].x = i;
			p[cnt ++].y = j;
		}
	int linenum = col + row;  //横线和竖线我们先算出来，接下来我们只考虑斜线 
	for (int i = 0; i < cnt; i ++)
		for (int j = 0; j < cnt; j ++) {
			if (p[i].x == p[j].x || p[i].y == p[j].y) continue;  // 如果两个点的横坐标或者纵坐标相等的话，说明是横线或者竖线，直接 continue 
			double k = (p[j].y - p[i].y) / (p[j].x - p[i].x);  // 算斜率 (y2 - y1) / (x2 - x1) 
			double b = (p[j].x * p[i].y - p[i].x * p[j].y) / (p[j].x - p[i].x);  // 算截距 (x2y1 - x1y2) / (x2 - x1) 
			if (line[{k,b}] == 0) {  // 判断这个 k 和 b 在没在 map 容器里面  
				line[{k,b}] = 1;   //  不在就将这种情况放进去 
				linenum ++;   // 并且让结果 ++ 
			}
		}
		cout << linenum;
		return 0;
}
