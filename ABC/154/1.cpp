#include <iostream>
#include <algorithm>//sort
#include <vector>
#include <string>
#include <map>//pair
#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main(){
  string S, T;
  int A, B;
  string U;
  cin >> S >> T >> A >> B >> U;
  if(U == S)cout << A - 1 << " " <<  B << endl;
  else cout << A << " " << B - 1 << endl;
}
