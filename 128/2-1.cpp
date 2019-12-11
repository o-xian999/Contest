#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <tuple>
#include <algorithm>

int main (void){
  int N;
  vector<tuple<string, int, int>> vec(N);

  for(i = 0; i < N; i++){
    cin >> get<0>(i) >> get<1>(i);
    get<1>(vec[i]) = -get<1>(vec[i]);
    get<2>(vec[i]) = i+1;
  }
  
  sort(vec.begin(), vec.end);
  for(int i = 0; i < N; i++){
  cout << get<2>(i) << endl;
  }

}

