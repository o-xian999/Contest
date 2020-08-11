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
  int H, A, ans = 0;
  cin >> H >> A;
  rep(i, 100000){
    H -= A;
    ans++;
    if(H <= 0){
      cout << ans << endl;
      return 0;
    }
  }
}
