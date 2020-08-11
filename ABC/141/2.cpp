#include <iostream>
#include <algorithm>//sort
#include <vector>
#include <string>
#include <map>//pair
#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main(){
  string S;
  bool ans = true;
  cin >> S;
  int size = S.size();
  //rep(i, size){
  //if(i % 2 == 0){
  for(int i = 1; i < size; i += 2){
    if(S.at(i) != 'L' && S.at(i) != 'U' && S.at(i) != 'D')ans = false;
    //cout << ans << endl;
  }
  //else if(i % 2 == 1){
  for(int i = 0; i < size; i += 2){
    if(S.at(i) != 'R' && S.at(i) != 'U' && S.at(i) != 'D')ans = false;
    //cout << ans << endl;
  }
  //}
  //rep(i, size)cout << S.at(i) << endl;
  if(ans)cout << "Yes" << endl;
  else cout << "No" << endl;
}
