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
  int A, B;
  cin >> A >> B;

  if(A == 1 && B == 2)cout << 3 << endl;
  if(A == 1 && B == 3)cout << 2 << endl;
  if(A == 2 && B == 3)cout << 1 << endl;
  if(A == 2 && B == 1)cout << 3 << endl;
  if(A == 3 && B == 1)cout << 2 << endl;
  if(A == 3 && B == 2)cout << 1 << endl;
}
