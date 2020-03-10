#include <iostream>
#include <algorithm>
#include <functional>
#include <stdio.h>
#include <vector>
#include <string>
#include <map>
#define rep(i, n) for(int (i) = (0); (i) < (n); (i)++)
//#define int long long
#define asort(v, n) sort((v), (v + n)) //Using array
#define vsort(v) sort((v).begin(), (v).end()) // Using vector
#define vint vector<int>

using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  if(a > b){
    rep(i, a){
      cout << b;
      //cout << endl;
    }
  }
  if(a <= b){
    rep(i, b){
      cout << a;
      //cout << endl;
    }
  }
  cout << endl;

}
