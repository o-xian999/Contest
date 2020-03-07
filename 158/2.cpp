#include <iostream>
#include <algorithm>//sort
#include <vector>
#include <string>
#include <map>//pair
#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main(){
  long long N, A, B;
  cin >> N >> A >> B;
  long long ans =A * (N / (A + B));
  //ans *= A;
  long long diff = N % (A + B);
  ans += min(diff, A);
  cout << ans << endl;
}
