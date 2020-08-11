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
  int N, K, M;
  cin >> N >> K >> M;
  vint A(100);
  rep(i, N - 1)cin >> A[i];
  
  int sum = N * M;
  rep(i, N - 1){
    sum -= A[i];
  }
  //cout << sum << endl;
  if(sum >= 0 && sum <= K)cout << sum << endl;
  else if(sum < 0 && sum <= K)cout << 0 << endl;
  else if(sum > K) cout << -1 << endl;
}
