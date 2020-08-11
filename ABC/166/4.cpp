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
  for(int i = -120; i < 120; i++){
    for(int j = -120; j < 120; j++){
      if(i ^ 5 - j ^ 5 == x){
        cout << i << j << endl;
        return 0;
      }
    }
  }
}
