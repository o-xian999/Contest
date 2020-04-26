#include <iostream>

using namespace std;

int main (){
	int a, b, c, d;
  cin >> a >> b >> c >> d;
  int ansa = a / d, ansb = c / b;
  if(a % d != 0)ansa++;
  if(c % b != 0)ansb++;

  if(ansa >= ansb)cout << "Yes" << endl;
  else cout << "No" << endl;
}
