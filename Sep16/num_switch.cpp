#include <iostream> 
using namespace std;
int main ()
{
	int a=10,b=20; int temp;
	cout <<"交換前:"<<"a="<<a<<" b="<<b<<endl;
	temp=a;a=b;b=temp;
	cout <<"交換後:"<<"a="<<a<<" b="<<b<<endl;
}
