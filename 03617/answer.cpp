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

int main(){
  int n;
  cin >> n;
  string str = "";
  string ans = "";

  for(int i = 0; i < n; i++){
    char ch;
    cin >> ch;
    str += ch;
  }

  for(int i = 0; i < n; i++){
    string dup = str;
    reverse(dup.begin(), dup.end());

    if(str < dup){
      ans += str[0];
      str.erase(str.begin());
    }else{
      ans += dup[0];
      str.erase(str.end()-1);
    }

    if((i+1) % 80 == 0){
      ans += "\n";
    }
  }

  cout << ans << endl;

  return 0;
}
