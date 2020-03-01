#include <iostream>

using namespace std;

int main(){
  int a[3][3];

  for(int i = 0; i<3; i++){
    for(int j = 0; j<3; j++){
      cin >> a[i][j];
    }
  }

  int m = 0, N;
    cin >> N;
  while(m < N){
    int b;
    cin >> b;
    for(int i = 0; i < 10; i++){
      for(int j = 0; j < 10; j++){
        if(a[i][j] == b) a[i][j] = 0;
      }
      //if(a[i][0] == a[i][1] || a[i][1] == a[i][2] || a[i][] == a[][])
    }
    ++m;
  }

  if(a[0][0]==a[0][1]&&a[0][1]==a[0][2]){
    cout << "Yes" << endl;
    //break;
  }
  else if(a[1][0]==a[1][1]&&a[1][1]==a[1][2]){
    cout << "Yes" << endl;
    //break;
  }
  else if(a[2][0]==a[2][1]&&a[2][1]==a[2][2]){
    cout << "Yes" << endl;
    //break;
  }
  else if(a[0][0]==a[1][0]&&a[1][0]==a[2][0]){
    cout << "Yes" << endl;
    //break;
  }
  else if(a[0][1]==a[1][1]&&a[1][1]==a[2][1]){
    cout << "Yes" << endl;
   // break;
  }
  else if(a[0][2]==a[1][2]&&a[1][2]==a[2][2]){
    cout << "Yes" << endl;
    //break;
  }
  else if(a[0][0]==a[1][1]&&a[2][2]==a[1][1]){
    cout << "Yes" << endl;
    //break;
  }
  else if(a[0][2]==a[1][1]&&a[1][1]==a[2][0]){
    cout << "Yes" << endl;
    //break;
  }

  else cout << "No" << endl;
  
}
