#include <iostream>
using namespace std;
int main()
{
	cout <<"請輸入你的身高(m):";
	double h;cin>>h; //h=身高 w=體重 
	cout <<"你輸入的身高是"<<h<<endl;
	
	cout <<"請輸入你的體重(kg):";
	double w;cin>>w; //h=身高 w=體重 
	cout <<"你輸入的體重是"<<w<<endl;
	
	
	cout<< "你的bmi是" << w/(h*h);
}
