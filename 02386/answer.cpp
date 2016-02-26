#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <limits.h>
#include <time.h>
#include <string>
#include <string.h>
#include <sstream>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <stack>
#include <queue>

using namespace std;

typedef long long ll;

const int DY[8] = {-1,-1,-1, 0, 0, 1, 1, 1};
const int DX[8] = {-1, 0, 1,-1, 1,-1, 0, 1};

int height, width;
char field[110][110];

void dfs(int y, int x){
  field[y][x] = '.';

  for(int i = 0; i < 8; i++){
    int ny = y + DY[i];
    int nx = x + DX[i];

    if(ny < 0 || height <= ny || nx < 0 || width <= nx) continue;

    if(field[ny][nx] == 'W'){
      dfs(ny,nx);
    }
  }
}

void solve(){
  int cnt = 0;

  for(int y = 0; y < height; y++){
    for(int x = 0; x < width; x++){
      if(field[y][x] == 'W'){
        dfs(y,x);
        cnt++;
      }
    }
  }

  cout << cnt << endl;
}

int main(){
  cin >> height >> width;

  for(int y = 0; y < height; y++){
    for(int x = 0; x < width; x++){
      cin >> field[y][x];
    }
  }

  solve();

  return 0;
}
