#include <iostream>
#include <algorithm>//sort
#include <functional>
#include <stdio.h>
#include <vector>
#include <string>
#include <map>//pair
#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main(){
  long long N, K, count = 0;
  cin >> N >> K;
  long long H[N];
  rep(i, N)cin >> H[i];

  if(N <= K){
    cout << 0 << endl;
    return 0;
  }

  sort(H, H + N);

  rep(i, N - K){
    count += H[i];
  }

  cout << count << endl;
}
