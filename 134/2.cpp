#include <iostream>
 
using namespace std;
 
int main(void){
  int N, D;
  
  cin >> N >> D;
  
  if(N < (D * 2 + 1)){
    cout << 1 << endl;
  }else if(N % (D * 2 + 1)){
    cout << N / (D * 2 + 1) + 1 << endl;
  }else{
    cout << N / (D * 2 + 1) << endl;
  }
}
