#include <iostream>
#include <algorithm>
#include <functional>
#include <stdio.h>
#include <vector>
#include <string>
#include <map>
#define rep(i, n) for(int (i) = (0); (i) < (n); (i)++)
//#define int long long
#define asort(v, n) sort((v), (v + n)) //Using array
#define vsort(v) sort((v).begin(), (v).end()) // Using vector
#define vint vector<int>

using namespace std;

int main(){
  int N, P, ans = 0;
  cin >> N;
  int mini = 1e9;//1e9 == 10 ^ 9

  rep(i, N){
    cin >> P;
      if(mini >= P)ans++;
    mini = min(mini, P);
  }

  cout << ans << endl;
  //int N;
  //cin >> N;
  //vint P[1000000];
  //
  //int norm = 0;
  //rep(i, N){
  //  cin >> P[i];
  //  if(i = 0)norm++;
  //  else if(P[i])
  //}
}
