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

signed main(){
  int N, M;
  cin >> N >> M;

  int AC = 0, WA = 0;
  vector<bool> flag(N, false);
  vector<int> wa(105000);
  rep(i, M){
    int p;
    string S;
    cin >> p >> S;
    if(flag[p])continue;//Go to the end of rep;
    if(S == "AC"){
      flag[p] = true;
      AC++;
      WA += wa[p];
    }else if(S == "WA"){
      wa[p]++;
    }
    //if(S == "AC" && flag[p - 1] == false){
    //  flag[p - 1] = true;
    //  ac++;
    //}
    //if(S == "WA" && flag[p - 1] == false)wa++;
  }


  //rep(i, N){
    //if(flag[i] == true)ac++;
    //if(flag[i] == false)wa++;
  //}

  cout << AC << " " << WA << endl;
}
