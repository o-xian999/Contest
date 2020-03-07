#include <iostream>
#include <algorithm>//sort
#include <vector>
#include <string>
#include <map>//pair
#define rep(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main(){
  long long i, j, N, A, B;
    string C[1000];
  cin >> N >> A >> B;
  int sum = A + B;
  int count = 0;
  int ans = 0;
  while(count > N){
    for(int i = count; i < count + A; i++)cin >> C[count];
    count += A;
    for(int j = count; j < count + B; j++)cin >> C[count];
    count += B;
  }
  rep(i, N){
    if(C[i]& == "b")ans++;
  }
  cout << ans << endl;
}
