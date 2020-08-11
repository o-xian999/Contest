#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <iostream>
#include <algorithm>
#include <functional>
#include <stdio.h>
#include <vector>
#include <string>
#include <map>
#define rep(i, n) for(int (i) = 0; (i) < (n); (i)++)
//#define rep(i, n) for(int (i) = 0, TmP = (n); (i) < (int)TmP ; ++(i))
//#define int long long
#define asort(v, n) sort((v), (v + n)) //Using array
#define vsort(v) sort((v).begin(), (v).end()) // Using vector
#define vint vector<int>

using namespace std;

signed main(void){
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int n;
  long long sum = 0;
  char s[4001];
  cin >> n;
  rep(i, n)cin >> s[i];

  if(n == 1 || n == 2){
    cout << 0 << endl;
    return 0;
  }

  for(int i = 0; i < n - 2; i++){
    for(int j = i + 1; j < n - 1; j++){
      if(s[i] != s[j]){
      for(int k = j + 1; k < n; k++){
        if(s[j] != s[k] && s[k] != s[i] && (j - i) != (k - j))sum++;
      }
      }
    }
  }

  cout << sum << endl;
}
