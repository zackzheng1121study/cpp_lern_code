#include <iostream>
using namespace std;
int main(){
  int money,fifty,ten,five,one;
  cout<<"叫块璶传肂:";cin>>money;
  fifty= money/50;
  money%=50;
  ten=money/10;
  money%=10;
  five=money/5;
  money%=5;
  one=money/1;
//?

  cout<<money<<"じ传程ぶ祑刽计秖:"<<endl;
  cout<<"ヮ珺じ:"<<fifty<<""<<endl;
  cout<<"珺じ:"<<ten<<""<<endl;
  cout<<"ヮじ:"<<five<<""<<endl;
  cout<<"滁じ:"<<one<<""<<endl;
  return 0;
} 
