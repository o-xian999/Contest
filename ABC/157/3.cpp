#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <stdio.h>
using namespace std;

int main(){
  int N, M, n, l, o;
  //array<int, 2> a[5]
  cin >> N >> M;
  int a[5][2];

  for(int i = 0; i < M; i++){
    //cout << a[2]
    //cin >> a[i].first >> a[i].second;
    //scanf("%d, %d", make_pair(&d, &d));
    //a[i] = make_pair;
    for(int j = 0; j < 2; j++){
      cin >> a[i][j];
    }
  }
  //cout << a[2];

  
  for(int i = 0; i < M; i++){
    if(a[i][0] == 1){
      int n = 0;
      cout << a[i][1];
      //break;
      ++n;
      if(n >= 2){
        cout << -1;
        exit;
      }else if(a[i][0] == 0){
        cout << -1;
        exit;
      }
    }
  }
  for(int i = 0; i < M; i++){
    if(a[i][0] == 2){
      int m = 0;
      cout << a[i][1];
      //break;
      ++m;
      if(m >= 2){
        cout << -1;
        exit;
      }else if(a[i][0] == 0&&n == 1&&m == 0){
        cout << 0;
      }
    }
  }
  for(int i = 0; i < M; i++){
    if(a[i][0] == 3){
      int l = 0;
      cout << a[i][1];
      //break;
      ++l;
      if(l >= 2){
        cout << -1;
        exit;
      }else if(a[i][0] == 0&&l == 1&&l == 0){
        cout << 0;
        //exit;
      }
    }
  }
  for(int i = 0; i < M; i++){
    if(a[i][0] == 4){
      int o = 0;
      cout << a[i][1];
      //break;
      ++o;
      if(o >= 2){
        cout << 0;
        exit;
      }else if(a[i][0] == 0&&l == 1&&o == 0){
        cout << 0;
        //exit;
      }
    }
  }
  for(int i = 0; i < M; i++){
    if(a[i][0] == 5){
      int p = 0;
      cout << a[i][1];
      //break;
      ++p;
      if(p >= 2){
        cout << 0;
        exit;
      }else if(a[i][0] == 0&&o == 0&&p == 0){
        cout << -1;
        //exit;
      }
    }
  }
}
