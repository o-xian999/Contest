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
//typedef long long ll;
#define int long long

using namespace std;

signed main(){
  int a;
  int num = 100;
  cin >> a;
  int c = 0;
  while(true){
    num += num / 100;
    c++;
    if(num >= a){
      cout << c << endl;
      return 0;
    }
  }
}
