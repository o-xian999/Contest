#include <iostream>
#include <algorithm>
#include <functional>
#include <stdio.h>
#include <vector>
#include <string>
#include <map>
#define rep(i, n) for(int (i) = 1; (i) <= (n); (i)++)
//#define rep(i, n) for(int (i) = 0, TmP = (n); (i) < (int)TmP ; ++(i))
//#define int long long
#define asort(v, n) sort((v), (v + n)) //Using array
#define vsort(v) sort((v).begin(), (v).end()) // Using vector
#define vint vector<int>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

signed main(){
  int n;
  long long sum = 0;
  cin >> n;
  rep(i, n){
    rep(j, n){
      rep(l, n){
        sum += gcd(gcd(i, j), l);
      }
    }
  }
  cout << sum << endl;
}
