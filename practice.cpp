#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> vc;
  int n;
  while(n--){
    int x;
    cin >> x;
    vc.push_back(x);
  }

  n = vc.size() / 2;
  if(vc[n] == vc.at(n))
    cout << n << '\n';
}

