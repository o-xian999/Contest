#include <iostream>
 
using namespace std;
 
int main(){
  int a, b, c, d;
  
  cin >> a >> b >> c;
  
  d = a*b;
  if(d <= c){
    cout << d << endl;
  }else{
    cout << c << endl;
  }
}
