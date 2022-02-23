#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int smaller(int a, int b) {
  if (a > b) return b;
  else return a;
}

int main(void) {
  int A, B, K;
  cin >> A >> B >> K;
  vector<int> factors;

  int counter = 0;
  for (int i = 1; i <= smaller(A, B); i++) {
    if (A % i == 0 && B % i == 0) {
      factors.push_back(i);
    }
  }

  cout << factors[factors.size() - K] << endl;
}