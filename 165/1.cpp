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
  int a, b, n;
  cin >> n >> a >> b;
  bool flag = true;
  for(int i = 1;i < 100000; i++){
    int num = n * i;
    if(a <= num && num <= b){
     cout << "OK" << endl;
      return 0;
    }
    else if(num > b){
      cout << "NG" << endl;
      return 0;
    }
  }
}
