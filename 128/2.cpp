#include <iostream>
#include <vector>
#include <algorithm>

int main(void){
  int N;
  cin << N;
  vector<vector<string>> vec(N, vector<string>(2));
  
  for (int i = 0; i < N; i++){
    for(int j = 0; j < 2; j++){
      cin << vec.at(i).at(j);
    }
  }

  sort(vec.begi
}
