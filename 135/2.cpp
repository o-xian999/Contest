#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
 
using namespace std;
 
int main(){
  int N, sum = 0, p[50];
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> p[i];
  }
 
  for(int i = 0; i < N - 1; i++){
    if(p[i] != i + 1)sum++;
  }
  if(sum <= 2)cout << "YES" << endl;
  else cout << "NO" << endl;
}
