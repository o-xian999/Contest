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
  int S;
  cin >> S;
  
  if(S == 1 || S == 2 || S == 3 || S == 5 || S == 7 || S == 13 || S == 15 || S == 17 || S == 19 || S == 23 || S == 29 || S == 31 || S == 11)cout << 1 << endl;
  if(S == 4 || S == 6 || S == 9 || S == 10 || S == 14 || S == 21 || S == 22 || S == 25 || S == 26)cout << 2 << endl;
  if(S == 8 || S == 12 || S == 18 || S == 20 || S == 27)cout << 5 << endl;
  if(S == 16)cout << 14 << endl;
  if(S == 24)cout << 15 << endl;
  if(S == 28 || S == 30)cout << 4 << endl;
  if(S == 32)cout << 51 << endl;
}
