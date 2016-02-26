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

void solve(){
  int l, n;
  cin >> l >> n;
  int max_time = 0;
  int min_time = 0;

  for(int i = 0; i < n; i++){
    int d;
    cin >> d;

    max_time = max(max_time, max(d, l-d));
    min_time = max(min_time, min(d, l-d));
  }

  cout << min_time << " " << max_time << endl;
}

int main(){
  int case_num;
  cin >> case_num;

  for(int i = 0; i < case_num; i++){
    solve();
  }

  return 0;
}
