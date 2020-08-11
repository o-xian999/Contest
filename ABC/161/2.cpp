#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int n;
  double m;
  cin >> n >> m;
  int a[105];
  for(int i = 0; i < n; i++){
  	cin >> a[i];
  }
  
  double sum = 0;
  for(int i = 0; i < n; i++){
  	sum += a[i];
  }
  
  sort(a, a + n, greater<int>());
  
  for(int i = 0; i < m; i++){
  	if(a[i] < sum / (4 * m)){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
