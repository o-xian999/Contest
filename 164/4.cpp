#include <iostream>
#include <math.h>
#include <algorithm>
#include <functional>
#include <stdio.h>
#include <vector>
#include <string>
#include <map>
#define rep(i, n) for (int (i) = 0; (i) < (int)(n); (i)++)
//#define rep(i, n) for(int (i) = 0, TmP = (n); (i) < (int)TmP ; ++(i))
#define asort(v, n) sort((v), (v + n)) //Using array
#define vsort(v) sort((v).begin(), (v).end()) // Using vector
#define vint vector<int>
typedef long long ll;

using namespace std;

signed main(){
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  string n;
  cin >> n;

  int ans = 0;

  for(int i = 0; i < n.length() - 4; i++){
    for(int j = i + 4; j < n.length(); j++){
      string substr = n.substr(i, j - i + 1);
      int m = atoi(substr.c_str());
      if(m % 2019 == 0)ans++;
    }
  }
  cout << ans << endl;
}
