#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main(){
  int N, X, L[100];
  cin >> N >> X;
  rep(i, N)cin >> L[i];

  int diff = 0, norm = 1;
  rep(i, N){
    diff += L[i];
    if(diff > X)break;
    //diff += L[i];
    norm++;
  }
  cout << norm << endl;
}
