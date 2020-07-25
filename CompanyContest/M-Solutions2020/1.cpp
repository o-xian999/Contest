#include <iostream>
#include <set>
#include <iomanip>
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
  int n = 0;
  cin >> n;
  if(n >= 400 && n <= 599)cout << 8 << endl;
  else if(n >= 600 && n <= 799)cout << 7 << endl;
  else if(n >= 800 && n <= 999)cout << 6 << endl;
  else if(n >= 1000 && n <= 1199)cout << 5 << endl;
  else if(n >= 1200 && n <= 1399)cout << 4 << endl;
  else if(n >= 1400 && n <= 1599)cout << 3 << endl;
  else if(n >= 1600 && n <= 1799)cout << 2 << endl;
  else if(n >= 1800 && n <= 1999)cout << 1 << endl;
}
