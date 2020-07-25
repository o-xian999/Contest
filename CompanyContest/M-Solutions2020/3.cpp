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
  int n, k, flag = 0;
  cin >> n >> k;
  vector<int> a(n), b(k, 0);
  rep(i, n)cin >> a[i];

  rep(i, k){
    int num = 1, cnt = 0;
    for(int j = i; cnt < k ; j++){
      cnt++;
      int num = num * a[j];
    }
    b[i] = num;
  }

  rep(i, k - n - 1){
    if(b[i] < b[i + 1])cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}
