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
  if(n % 10 == 2 || n % 10 == 4 || n % 10 == 5 || n % 10 == 7 || n % 10 == 9)cout << "hon" << endl;
  else if(n % 10 == 0 || n % 10 == 1 || n % 10 == 6 || n % 10 == 8)cout << "pon" << endl;
  else cout << "bon" << endl;
}
