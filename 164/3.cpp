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
  int n; 
  cin >> n;
  vector<string> vec;
  rep(i, n)cin >> vec.at(i);

  sort(vec.begin(), vec.end());

  int ans = 0;
  for(int i = 1; i < n; i++){
    if(vec.at(i) != vec.at(i - 1))ans++;
  }

  cout << ans + 1 << endl;
}