#include <iostream>
#include <string>
using namespace std;
 
int main(){
  string S;
  
  cin >> S;
  
  int sum = 0;
  
  if(S[0] == '1') sum += 1;
  if(S[1] == '1') sum += 1;
  if(S[2] == '1') sum += 1;
  
  cout << sum << endl;
}
