#include <iostream>
#include <set>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <functional>
#include <stdio.h>
#include <vector>
#include <string>
#include <map>
#define rep(i, n) for (int (i) = 0; (i) < (int)(n); (i)++)
//#define rep(i, n) for(int (i) = 0, TmP = (n); (i) < (int)TmP ; ++(i))
#define asort(v, n) sort((v), (v + n)) //Using array
#define vsort(v) sort((v).begin(), (v).end()) // Using vector
#define vint vector<int>
typedef long long ll;

using namespace std;

signed main(){
  string s;
  cin >> s;
  int l = s.length();

  rep(i, (l - 1) / 2){
    if(s[i] != s[l - i - 1]){
      cout << "No" << endl;
      //cout << s[i] << " " << s[l - i - 1] << endl;
      return 0;
    }
  }

  rep(i, (l - 1) / 4){
    if(s[i] != s[l - i  - 1 - ((l + 1) / 2)]){
      cout << "No" << endl;
      //cout << s[i] << " " << s[l - i - 1 - ((l + 1) / 2)] << endl;
      return 0;
    }
  }

  rep(i, (l - 1) / 4){
    if(s[l - i - 1] != s[i + ((l + 2) / 2)]){
      cout << "No" << endl;
      //cout << s[i + ((l + 2) / 2)] << " " << s[l - i - 1] << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}
