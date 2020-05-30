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
  int n;
  string s;
  cin >> n >> s;

  if(n % 2 == 1){
    cout << "No" << endl;
    return 0;
  }

  rep(i, n / 2){
    if(s[i] != s[i + (n / 2)]){
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}
