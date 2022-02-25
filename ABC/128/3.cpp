#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  int N, M;
  cin >> N >> M;

  vector<vector<int>> input(M, vector<int>());
  for (int i = 0; i < M; i++) {
    int k = 0;
    cin >> k;
    for (int j = 0; j < k; j++) {
      int s = 0;
      cin >> s;
      input[i].push_back(s);
    }
  }

  vector<int> ps;
  for (int i = 0; i < M; i++) {
    int p = 0;
    cin >> p;
    ps.push_back(p);
  }

  bool exist = false;
  for (int bit = 0; bit < (1 << N); ++bit) {
    
  }

  return 0;
}