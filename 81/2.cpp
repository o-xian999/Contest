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
  ll n, ans = 0;
  cin >> n;
  vector<ll> vec(n);
  rep(i, n)cin >> vec[i];

  bool flag = true;
  while(flag){
    rep(i, n){
      if(vec[i] % 2 == 0){
        vec[i] /= 2;
        //cout << vec[i] << endl;
      }else{
        cout << ans << endl;
        return 0;
      }
    }
    ans++;
  }
}
