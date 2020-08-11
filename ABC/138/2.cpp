#include <iostream>
using namespace std;
int main(){
  int N;
  double A[1000], ans = 0;
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> A[i];
    ans += 1/A[i];
  }
  cout << 1/ans << endl;
}
