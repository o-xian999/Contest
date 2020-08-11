#include <iostream>
#include <algorithm>//sort
#include <functional>
#include <stdio.h>
#include <vector>
#include <string>
#include <map>//pair
#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main(){
  int m;
  cin >> m;
  if(m < 100)cout << "00" << endl;
  else if(m >= 100 && m <= 5000){
    if(m / 100 < 10)cout << "0" << m / 100 << endl;
    else cout << m / 100 << endl;
  }
  else if(m >= 6000 && m <= 30000)cout << (m / 1000) + 50 << endl;
  else if(m >= 35000 && m <= 70000)cout << ((m / 1000) - 30) / 5 + 80 << endl;
  else if(m > 70000)cout << 89 << endl;
}
