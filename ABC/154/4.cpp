#include <iostream>
#include <stdio.h>
#include <algorithm>//sort
#include <vector>
#include <string>
#include <map>//pair
#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main(){
  double N, K, ans = 0.00000000;
  cin >> N >> K;
  vector<double> p(10000, 0);
  rep(i, N){
    int num;
    cin >> num;
    p[i] = (num + 1)/2;
  }
  sort(p.begin(), p.end(), greater<>());
  rep(i, K){
    ans += p[i];
    //ans += atoi(p[i].c_str());
  }
  cout << ans << endl;
}
