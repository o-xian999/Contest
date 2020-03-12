#include <iostream>
#include <algorithm>
#include <functional>
#include <stdio.h>
#include <vector>
#include <string>
#include <map>
#define rep(i, n) for(int (i) = 0; (i) < (n); (i)++)
//#define rep(i, n) for(int (i) = 0, TmP = (n); (i) < (int)TmP ; ++(i))
//rep(i, v.size()) v[i]=i;
//#define int long long
#define asort(v, n) sort((v), (v + n)) //Using array
#define vsort(v) sort((v).begin(), (v).end()) // Using vector
#define vint vector<int>

using namespace std;

bool isPrime(int x){
  if(x <= 1) return 0;
  else if(x == 2) return 1;
  if(x % 2 == 0) return 0;
  //Nが素数の時，1とN以外の約数がないので，判定したいときは約数の有無を確かめる．
  //ある約数iがあったとき，N/iもNの約数となる．
  //ここで，i=N/iとなるiは√Nなので，iの候補は1~√Nとなる.
  for(int i = 3; i * i <= x; i += 2) if(x % i == 0) return 0;
  return 1;
}

signed main(){
  int A;
  cin >> A;

  while (!isPrime(A)) {
    A++;
    //cout << A << endl;
  }

  cout << A << endl;
}
