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

void solve(int r, int n){
  vector<int> x(n);
  int coverd = -1;
  int non_cover_min_x = -1;
  int ans = 0;

  for(int i = 0; i < n; i++){
    cin >> x[i];
  }

  sort(x.begin(), x.end());

  for(int i = 0; i < n;){
    non_cover_min_x = x[i++];

    while(i < n && x[i] <= non_cover_min_x+r){
      i++;
    }

    coverd = x[i-1] + r;
    ans++;

    while(i < n && x[i] <= coverd){
      i++;
    }
  }

  if(x[n-1] <= coverd){
    cout << ans << endl;
  }else{
    cout << ans + 1 << endl;
  }
}

int main(){
  int r, n;

  while(true){
    cin >> r >> n;

    if(r == -1 && n == -1){
      break;
    }
    solve(r,n);
  }

  return 0;
}
