#include <iostream>
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
  double a, b, h, m, PI = 3.14159265359;
  cin >> a >> b >> h >> m;

  double angle1, angle2;
  angle1 = m * PI / 30;
  angle2 = (60 * h + m) * PI / 360;
  double ang = max(angle1, angle2) - min(angle1, angle2);
  if(ang > PI)ang = 2 * PI - ang;
  double ans = sqrt(pow(a, 2) + pow(b, 2) - 2 * a * b * cos(ang));
  cout << fixed << setprecision(11) << ans << endl;
}
