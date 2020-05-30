#include <iostream>
#include <set>
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
  int n, y, z;
  cin >> n >> y;

  rep(i, n){
    rep(j, n){
      z = n - i - j;
      if(z < 0)continue;
      if(10000 * i + 5000 * j + 1000 * z== y){
        cout << i << " " << j << " " << z << endl;
        return 0;
      }
    }
  }

  cout << "-1 -1 -1" << endl;
}
