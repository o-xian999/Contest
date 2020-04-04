#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
  long long n, m;
  cin >> n >> m;
  if(abs(n % m - m) < n % m)cout << abs(n % m - m) << endl;
  else cout << n % m << endl;
}
