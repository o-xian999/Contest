#include <iostream>
#include <algorithm>
#include <functional>
#include <stdio.h>
#include <vector>
#include <string>
#include <map>
#define rep(i, n) for(int (i) = 0; (i) < (n); (i)++)
//#define rep(i, n) for(int (i) = 0, TmP = (n); (i) < (int)TmP ; ++(i))
//rep(i, v.size()) v[i]=i;
#define int long long
#define asort(v, n) sort((v), (v + n)) //Using array
#define vsort(v) sort((v).begin(), (v).end()) // Using vector
#define vint vector<int>

using namespace std;

signed main(){
  int a, b;
  cin >> a >> b;
  if(a == 1 || b == 1)cout << 1 << endl;
  else if(a * b % 2 == 0)cout << (a * b) / 2 << endl;
  else cout << ((a * b) / 2 ) + 1 << endl;
}
