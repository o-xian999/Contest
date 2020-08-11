#include <iostream>
#include <functional>
#include <algorithm>//sort
#include <vector>
#include <string>
#include <map>//pair
#define rep(i, n) for(long long i = 0; i < n; i++)

using namespace std;

int main(){
  int N;
  bool flag1 = true, flag2 = true;
  //vector<int> A; 
  int A[2000000];
  cin >> N;
  rep(i, N)cin >> A[i];
  sort(A, A + N);
  rep(i, N - 1){
    if(A[i] == A[i + 1]){
      cout << "NO" << endl;
      return 0;
    }
  } 
  cout << "YES" << endl;
  //rep(i, N){
  //  int sum = 0;
  //  rep(j, 1000000000){
  //    if(A[i] == j)sum++;
  //  }
  //  if(sum >= 2){
  //    cout << "NO" << endl;
  //    return 0;
  //  }
  //}
  //cout << "YES" << endl;
}
