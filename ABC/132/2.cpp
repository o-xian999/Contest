#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(){
  int n; 
  vector<int> p(20);
  cin >> n;
  for(int i = 0; i < n; i++)cin >> p[i];
  int ans = 0;
  for(int i = 1; i < n - 1; i++){
    if(p[i - 1] < p[i] && p[i] < p[i + 1])ans++;
    else if(p[i - 1] > p[i] && p[i] > p[i + 1])ans++;
  }
  cout << ans << endl;
}
