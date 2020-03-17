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
//#define int long long
#define asort(v, n) sort((v), (v + n)) //Using array
#define vsort(v) sort((v).begin(), (v).end()) // Using vector
#define vint vector<int>

using namespace std;

signed main(){
  int N; 
  bool flag = true;
  vector<int> v(100003);

  cin >> N;
  rep(i, N)cin >> v[i];

  int i = 0;
  rep(i, N - 1){
    cout << v[i] - 1 << v[i + 1] << endl;
    if(v[i] - 1 - v[i + 1] >= 1 && v[i + 1] > v[i + 2] >= 1)flag = false;
    if(!flag)break;
  }
  if(!flag)cout << "No" << endl;
  else cout << "Yes" << endl;
}
