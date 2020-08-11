#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main(){
  int N;
  pair<pair<string, int>, int> p[110];

  cin >> N;
  rep(i, N){
    //一回一回nameとscoreを代入した後pairにぶち込む
    string name;
    int score;
    cin >> name >> score;
    p[i] = make_pair(make_pair(name, -score), i);
  }
  sort(p, p + N);//左から順に昇順ソート
  rep(i, N)cout << p[i].second + 1 << endl;//<入れ子になってる要素>から+1して脱出
}

#include <iostream>
#include <algorithm>//sort
#include <vector>
#include <string>
#include <map>//pair
#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main(){

}
