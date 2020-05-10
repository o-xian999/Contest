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
  ll a, b, c, k;
  cin >> a >> b >> c >> k;
  ll A = a;
  
  if(a > k){
    cout << k << endl;
    return 0;
  }else if(a + b >= k){
    cout << a << endl;
    return 0;
  }else{
    for(int i = 1; i <= k - a - b; i++){
      A -= 1;
    }
    cout << A << endl;
    return 0;
  }
}
