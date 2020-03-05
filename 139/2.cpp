#include <iostream>
using namespace std;
int main(){
  int a, b, ans = 0, c = 1;
  cin >> a >> b;
  while(c < b){
    --c;
    c += a;
    ++ans;
    //if(c + 1 >= b)break;
  }
  cout << ans << endl;
}
