#include <iostream>

using namespace std;

int main(){
  int N, K, c = 0;
  cin >> N >> K;
  while(true){
    N = N / K;
    if(N == 0)break;
    ++c;
  }
  cout << c + 1 << endl;
}
