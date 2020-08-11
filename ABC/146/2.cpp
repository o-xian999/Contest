#include <iostream>
#include <string>

using namespace std;

int main(){
  string S;
  int N;
  cin >> N >> S;
  size_t l = S.length();

  for(int i = 0; i < l; i++){
    int x = S[i] - 'A';
    x = (x + N) % 26;
    cout << char('A' + x);
  }
  cout << endl;
}
