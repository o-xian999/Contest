#include <iostream>
 
using namespace std;
 
int main(){
  int A,B,c;
  cin >> A >> B;
  
  c = A + B;
  
  if(c % 2 == 0) cout << c / 2 << endl;
  else cout << "IMPOSSIBLE" << endl;
}
