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
  string S;
  cin >> N >> S;

  int ans = 0;
  rep(i, N){
    //Use ' ' when comparing strings
    if(S[i] == 'A' && S[i + 1] == 'B' && S[i + 2] == 'C')ans++;
  }

  cout << ans << endl;
}
