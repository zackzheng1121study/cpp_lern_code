#include <iostream>
using namespace std;
int main()
{
	double chi,math,eng,code,total,average;
	cout <<"請輸入你的國文成績:";
	cin>>chi;  
	cout <<"你輸入的國文成績是"<<chi<<endl;

	cout <<"請輸入你的數學成績:";
	cin>>math;  
	cout <<"你輸入的數學成績是"<<math<<endl;
	
	
    cout <<"請輸入你的英文成績:";
	cin>>eng;  
	cout <<"你輸入的英文成績是"<<eng<<endl;
	
	
	cout <<"請輸入你的程式設計成績:";
	cin>>code;  
	cout <<"你輸入的程式設計成績是"<<code<<endl;
	total= chi+math+eng+code;
	average= total/4.0;

	cout<< "你的總成績是" << total<< endl <<"你的總平均是"<<average;
}
