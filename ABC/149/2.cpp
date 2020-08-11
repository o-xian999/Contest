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
  int A, B, K;
  cin >> A >> B >> K;

  if(A >= K)cout << A - K << " " << B << endl;
  else if(A + B >= K)cout << 0 << " " << B - (K - A) << endl;
  else cout << 0 << " " << 0 << endl;

  //rep(i, K){
  //  if(A > 0)A--;
  //  else B--;
  //}

  //if(A < K){
  //  //A = 0;
  //  B = B - (K - A);
  //  A = 0;
  //}else if(A >= K){
  //  A -= K;
  //}

  //cout << A << " " << B << endl;
}
