#include <iostream>
 
using namespace std;
 
int main(){
  char S[10], T[10];
  int sum = 0;
  
  cin >> S >> T;
  
  if (S[0] == T[0]) sum += 1;
  if(S[1] == T[1]) sum += 1;
  if(S[2] == T[2]) sum += 1;
    
  cout << sum << endl;
};
