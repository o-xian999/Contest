#include <iostream>
#include <set>
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
  int n, k;
  cin >> n >> k;
  vector<int> vec(n, 0);
  rep(i, k){
    int d;
    cin >> d;
    rep(j, d){
      int m;
      cin >> m;
      vec[m - 1] = m;
    }
  }
  int ans = 0;
  for(int i = 0; i < n; i++){
    if(vec[i] == 0){
      ans++;
    }   
  }
  cout << ans << endl;

}
