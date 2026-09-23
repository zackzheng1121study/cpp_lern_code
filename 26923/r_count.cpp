#include<iostream>
using namespace std;
//#define pi 3.1415926
int main(){
	double r,area,perimeter,voulume;
	const double pi=3.1415926;
	cout<<"請輸入圓的半徑:";
	cin>>r;
	area=r * r * pi;
	perimeter=2 *r *pi;
	voulume=(4.0/3.0) * pi * r * r * r;
	cout<<"半徑"<<r<<"的圓面積為:"<< area <<endl;
	cout<<"半徑"<<r<<"的圓周長為:"<< perimeter <<endl;
	cout<<"半徑"<<r<<"的球體體積為:"<< voulume <<endl;
} 
