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
  int a, b, c, k;
  cin >> a >> b >> c >> k;
  
  for(int i = 0; i <= k; i++){
    for(int j = 0; j <= k; j++){
      for(int l = 0; l <= k; l++){
        if(i + j + l == k){
          if(c * pow(2, i) > b * pow(2, j) && b * pow(2, j) > a * pow(2, l)){
            cout << "Yes" << endl;
            return 0;
          }
        }
      }
    }
  }

  cout << "No" << endl;
}
