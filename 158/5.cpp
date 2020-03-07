#include <iostream>
#include <stdio.h>
#include <algorithm>//sort
#include <vector>
#include <string>
#include <map>//pair
#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main(){
  int N, P, ans;
  string S;
  cin >> N >> P >> S;
  for(int i = 0; i < N; i++){
    for(int j = i; j < N - 1; j++){
      string substr = S.substr(i, j + 1);
      int num = atoi(substr.c_str());
      if(num % P == 0)ans++;
      cout << substr << endl;
      //if(j == N)break;
    }
  }
  cout << ans << endl;
}
