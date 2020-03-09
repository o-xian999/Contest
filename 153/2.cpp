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
  int H, N, ans;
   cin >> H >> N;
   int A[1000000];
   rep(i, N)cin >> A[i];
   
   rep(i, N){
    ans += A[i];
   }
   if(ans >= H)cout << "Yes" << endl;
   else cout << "No" << endl;
}
