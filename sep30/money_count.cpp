#include <iostream>
using namespace std;
int main(){
  int money,fifty,ten,five,one;
  cout<<"請輸入要兌換的金額:";cin>>money;
  fifty= money/50;
  ten=(money%50)/10;
  five=(money%10)/5;
  one=(money%5)/1;
//真的有那麼簡單嘛.... 

  cout<<money<<"元可以兌換最少硬幣數量為:"<<endl;
  cout<<"伍拾元:"<<fifty<<"個"<<endl;
  cout<<"拾元:"<<ten<<"個"<<endl;
  cout<<"伍元:"<<five<<"個"<<endl;
  cout<<"壹元:"<<one<<"個"<<endl;
  return 0;
} 
