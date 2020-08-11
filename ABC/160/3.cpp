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
  int k, n;
  cin >> k >> n;
  vector<int> a(n, 0);
  rep(i, n)cin >> a[i];

  vector<int> dis(n, 0);
  rep(i, n - 1)dis[i] = a[i + 1] - a[i];
  //dis.push_back(k - a[n - 1]);
  dis[n - 1] = k - a[n - 1];
  sort(dis.begin(), dis.end());

  int ans = 0;
  rep(i, n - 1){
    ans += dis[i];
  }
  cout << ans << endl;
}
