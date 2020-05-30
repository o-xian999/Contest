#include <iostream>
#include <iomanip>
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
  double ans = 0, l;
  int n;
  cin >> n;
  vector<vector<double>> data(n, vector<double>(2));

  rep(i, n){
    rep(j, 2)cin >> data[i][j];
  }

  for(int i = 0; i < n - 1; i++){
    for(int j = i + 1; j < n; j++){
      l = sqrt(pow(data[i][0] - data[j][0], 2) + pow(data[i][1] - data[j][1], 2));
      ans = max(ans, l);
    }
  }

  cout << ans << endl;
}
