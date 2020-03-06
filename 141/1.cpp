#include <iostream>
#include <string.h>

using namespace std;

int main(void){
  char S[60];

  cin >> S;

  if (S == "Sunny"s) cout << "Cloudy" << endl;
  else if (S == "Cloudy"s) cout << "Rainy" << endl;
  else if(S == "Rainy"s) cout << "Sunny" << endl;
}
