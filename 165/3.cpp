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
  int n, m, q;
  cin >> n >> m >> q;
  //int a, b, c, d;
  vector<int> ans()
  rep(i, q){
    cin >> a >> b >> c >> d;
    vector<int> vec(n, 0);
    rep(i, n){
      cin >> vec[i];
    }
    if(vec[b] - vec[a] == c)
  }
}
