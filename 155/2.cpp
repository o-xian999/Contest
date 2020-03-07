#include <iostream>
#include <algorithm>//sort
#include <vector>
#include <string>
#include <map>//pair
#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main(){
  int N, A[102];
  cin >> N;
  rep(i, N){
    cin >> A[i];
  }
  bool flag = true;
  rep(i, N){
    if(A[i] % 2 == 0){
      if(A[i] % 3 != 0 && A[i] % 5 != 0){
        flag = false;
        //cout << A[i] << endl;
      }
    }
  }
  if(flag) cout << "APPROVED" << endl;
  else cout << "DENIED" << endl;
}
