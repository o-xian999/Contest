#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(){
  int N, D, diff, ans = 0;
  int X[20][20];
  bool flag;
  cin >> N >> D;
  for(int i = 0; i < N; i++){
    for(int j = 0;j < D; j++){
      cin >> X[i][j];
    }
  }

  for(int i = 0; i < N; i++){
    for(int j = i + 1; j < N; j++){
      int norm = 0;
      for(int k = 0; k < D; k++){
        diff = abs(X[i][k] - X[j][k]);
        norm += diff * diff;
      }
      flag = false;
      for(int k = 0; k <= norm; ++k){
        if(norm == k * k)flag = true;
      }
      if(flag) ++ans;
    }
  }
  cout << ans << endl;
}
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//  int N, D; cin >> N >> D;
//  vector<vector<int>> X(N, vector<int>(D));
//  for (int i = 0; i < N; ++i) {
//    for (int j = 0; j < D; ++j) {
//      cin >> X[i][j];
//    }
//  }
//  int ans = 0;
//  for (int i = 0; i < N; ++i) {
//    for (int j = i+1; j < N; ++j) {
//      int norm = 0;
//      for (int k = 0; k < D; ++k) {
//        int diff = abs(X[i][k] - X[j][k]);
//        norm += diff * diff;
//      }
//      // check whether norm = k for some k
//      bool flag = false;
//      for (int k = 0; k <= norm; ++k) {
//        if (k * k == norm) {
//          flag = true;
//        }
//      }
//      if (flag) ++ans;
//    }
//  }
//  cout << ans << endl;
//}
