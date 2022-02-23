#include <iostream>

using namespace std;

int main(void) {
  int input = 0;
  bool isOk = false;
  cin >> input;

  for (int i = 1; i <= 9; i++) {
    for(int j = 1; j <= 9; j++) {
      if (i * j == input) {
        isOk = true;
        break;
      }
    }
  }

  if (isOk) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;

}