#include <iostream>
using namespace std;
int main(){
  int K, X, init;
  cin >> K >> X;
  init = X - K + 1;
  for(int i = 0; i < 2 * K - 1; i++){
    cout << init << " ";
    ++init;
  }
}
