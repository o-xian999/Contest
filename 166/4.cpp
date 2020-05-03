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
  int x;
  cin >> x;
  int n = 1;
  while(true){
    if(x % n == 0)break;
    n++;
  }

  int a, b;
  rep(a, n){
    if(a ^ 5 + (n - a) ^ 5 - x == 0)cout << a << n - a << endl;
  }
}
