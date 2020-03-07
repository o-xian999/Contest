#include <iostream>
#include <cmath>
#include <algorithm>//sort
#include <vector>
#include <string>
#include <map>//pair
#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main(){
  int a,b;
  cin >> a >> b;
  rep(i, 1010){
    if(int(i * 0.08) == a && int(i * 0.1) == b){
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
  //double A, B, a, b;
  ////int a,b;
  //cin >> A >> B;
  //a = A / 0.08;
  //b = B / 0.1;
  //int ans = min(a, b);
  ////if(a * 0.02 >= A - B && b * 0.02 >= A - B)cout << -1 << endl;
  ////else if(a < b)cout << a << endl;
  ////else cout << b << endl;
  //if(ans * 0.02 < abs(a - b))cout << -1 << endl;
  //else cout << ans << endl;
}
