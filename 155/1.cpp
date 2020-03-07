#include <iostream>
#include <algorithm>//sort
#include <vector>
#include <string>
#include <map>//pair
#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main(){
  int A, B, C;
  cin >> A >> B >> C;
  if(A == B && B != C)cout << "Yes" << endl;
  else if(A == C && B != C)cout << "Yes" << endl;
  else if(C == B && A != C)cout << "Yes" << endl;
  else cout << "No" << endl;
}
