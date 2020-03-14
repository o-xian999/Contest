#include <iostream>
#include <math.h>
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
  long double a, b, c;
  long double sqrtl(long double x);

  cin >> a >> b >> c;

  //a = pow(a, 0.5);
  //b = pow(b, 0.5);
  //c = pow(c, 0.5);
  //long double d = 2 * pow(a * b, 0.5);

  if(4 * a * b < pow(a, 2.0) + pow(b, 2.0) + pow(c, 2.0) + 2*a*b - 2*b*c - 2*c*a)cout << "Yes" << endl;
  else cout << "No" << endl;
}
