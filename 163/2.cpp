#include <iostream>
#include <math.h>
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

signed main(){
  int n, m; 
  int a[10005];
  cin >> n >> m;
  rep(i, m){
    cin >> a[i];
  }

  rep(i, m){
    n -= a[i];
  }

  if(n >= 0)cout << n << endl;
  else cout << -1 << endl;
}
